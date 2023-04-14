#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- It will read the text file then print to STDOUT.
 * @filename: the text file is being read
 * @letters: size of the letters
 * Return: w- the number of bytes that read and printed out
 *        0 when function declines or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file;
	ssize_t w;
	ssize_t t;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(file, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(file);
	return (w);
}


