#include "main.h"

/**
 * append_text_to_file - this will appends text at the end of each file.
 * @filename: it will point the name of the file.
 * @text_content: the string will add at the end of each file.
 *
 * Return: function declined or filename is NULL - -1, when the file does not exist the user wont have excess to write permissions - -1.Or else return - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, q, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	q = write(i, text_content, len);

	if (i == -1 || q == -1)
		return (-1);

	close(i);

	return (1);
}

