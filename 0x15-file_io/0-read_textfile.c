#include "main.h"

/**
 * read_textfile - Reads a text file.
 * @filename: The name of the file to read.
 * @letters: The number of letters to print.
 *
 * Return: The number of letters printed on success, 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (!filename)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file_desc);
		return (0);
	}

	bytes_read = read(file_desc, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(file_desc);
	free(buffer);

	return (bytes_written);
}
