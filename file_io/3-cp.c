#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * safe_close - Closes a file descriptor or exits with code 100
 * @fd: The file descriptor to close
 */
static void safe_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * safe_read - Reads from a file descriptor, retries if interrupted
 * @fd: Source file descriptor
 * @buf: Buffer to store data
 * @n: Number of bytes to read
 * @filename: Name of the file (for error messages)
 * Return: Number of bytes read
 */
static ssize_t safe_read(int fd, char *buf, size_t n, const char *filename)
{
	ssize_t bytes_read;

	do {
		bytes_read = read(fd, buf, n);
	} while (bytes_read == -1 && errno == EINTR);

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (bytes_read);
}

/**
 * safe_write - Writes all bytes to a file descriptor
 * @fd: Destination file descriptor
 * @filename: File name (for error message)
 * @buf: Data to write
 * @count: Number of bytes to write
 */
static void safe_write(int fd, const char *filename, const char *buf, ssize_t count)
{
	ssize_t written = 0, w;

	while (written < count)
	{
		do {
			w = write(fd, buf + written, count - written);
		} while (w == -1 && errno == EINTR);

		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			exit(99);
		}
		written += w;
	}
}

/**
 * main - Copies contents of one file to another using 1 KiB buffer
 * @argc: Argument count
 * @argv: Argument values
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int src_fd, dest_fd;
	ssize_t bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	bytes = safe_read(src_fd, buffer, BUFFER_SIZE, argv[1]);

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		safe_close(src_fd);
		exit(99);
	}

	if (bytes > 0)
		safe_write(dest_fd, argv[2], buffer, bytes);

	while ((bytes = safe_read(src_fd, buffer, BUFFER_SIZE, argv[1])) > 0)
		safe_write(dest_fd, argv[2], buffer, bytes);

	safe_close(src_fd);
	safe_close(dest_fd);
	return (0);
}

