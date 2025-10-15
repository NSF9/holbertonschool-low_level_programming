#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>

/**
 * create_file - Creates a file and writes text content into it
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int File_Descriptor;
	int Bytes_written;
	int len = 0;

	if (filename == NULL)
	return (-1);

	File_Descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (File_Descriptor == -1)
	return (-1);

	if (text_content != NULL)
	{
	while (text_content[len] != '\0')
	len++;

	Bytes_written = write(File_Descriptor, text_content, len);
	if (Bytes_written == -1 || Bytes_written != len)
	{
	close(File_Descriptor);
	return (-1);
	}
	}

	close(File_Descriptor);
	return (1);
}

