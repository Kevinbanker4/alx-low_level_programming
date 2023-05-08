#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The content to append to the file.
 *
 * Return: 1 on success, -1 if the file does not exist or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	int num_letters;
	int bytes_written;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		bytes_written = write(file_desc, text_content, num_letters);
		if (bytes_written == -1)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);

	return (1);
}
