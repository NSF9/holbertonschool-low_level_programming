#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text to the end of an existing file
 * @filename: Name of the file
 * @text_content: NULL-terminated string to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int File_Descriptor;
	int Bytes_written;
	int len = 0;

	if (filename == NULL)
		return (-1);

	File_Descriptor = open(filename, O_WRONLY | O_APPEND);
	if (File_Descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		Bytes_written = write(File_Descriptor, text_content, len);
		if (Bytes_written == -1)
		{
			close(File_Descriptor);
			return (-1);
		}
	}

	close(File_Descriptor);
	return (1);
}

