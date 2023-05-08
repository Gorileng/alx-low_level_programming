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
	int fdOpen, fdWrite, length = 0;

	if (filename == NULL)
		return (-1);

	fdOpen = open(filename, O_WRONLY | O_APPEND);

	if (fdOpen == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	while (text_content[length] != '\0')
	{
		length++;
	}

	fdWrite = write(fdOpen, text_content, length);

	if (fdWrite == -1)
		return (-1);

	close(fdOpen);

	return (1);
}
