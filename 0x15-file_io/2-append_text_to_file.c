#include "main.h"

/**
 * append_text_to_file - this will appends text at the end of each file.
 * @filename: points the name of the file.
 * @text_content: the string will add at the end of each file.
 *
 * Return: function return 1 if exist or else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int letters;
	int rwr;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		rwr = write(file, text_content, letters);

		if (rwr == -1)
			return (-1);
	}

	close(file);

	return (1);
}

