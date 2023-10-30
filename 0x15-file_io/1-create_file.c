#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int input, output, count = 0;

	if (filename == NULL)
		return (-1);
	input = open(filename, O_RDONLY | O_CREAT | O_TRUNC, 0600);

	if (input == -1)
		return (-1);
	if (text_content == NULL)
		return (-1);

	while (text_content[count] != '\0')
		count++;

	output = write(input, text_content, count);
	if (output == -1 || output != count)
		return (-1);

	close(input);
	return (1);
}
