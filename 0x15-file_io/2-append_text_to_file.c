#include "main.h"
/**
 * append_text_to_file - appends text at the end of file
 * @filename: name of file
 * @text_content: string to add at the end of the file
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int reader, output, count;

	if (filename == NULL)
		return (-1);

	reader = open(filename, O_WRONLY | O_APPEND);

	if (reader == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	while (text_content[count] != '\0')
		count++;
	output = write(reader, text_content, count);
	if (output == -1)
		return (-1);
	close(reader);
	return (1);
}
