#include "main.h"

/**
 * create_file - the code will create a file.
 * @filename: it will point to the name of the file to be created.
 * @text_content: it will point to the string to write into the file.
 *
 * Return: If the function declines return - -1.
 *         Or else this return - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file, text_content, len);

	if (file == -1 || w == -1)
		return (-1);

	close(file);

	return (1);
}

