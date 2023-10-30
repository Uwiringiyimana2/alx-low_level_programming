#include "main.h"
/**
 * read_textfile - reads and prints it to the POSIX standard output
 * @filename: name of file to read
 * @letters: letters to read
 * Return: 0 if file can not be opened or read, file is NULL or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reader, output, fd;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	reader = read(fd, buff, letters);

	if (reader == -1)
	{
		free(buff);
		return (0);
	}

	output = write(STDOUT_FILENO, buff, reader);

	if (output == -1 || output != reader)
	{
		free(buff);
		return (0);
	}

	close(fd);
	free(buff);
	return (output);
}
