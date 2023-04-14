#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int file);

/**
 * create_buffer - 1024 bytes for buffer is allocated.
 * @file: the file buffer it store chars.
 *
 * Return: the new allocated buffer will be pointed.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Cannot write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - file will close.
 * @file: to be closed.
 */
void close_file(int file)
{
	int d;

	d = close(file);

	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close file %d\n", file);
		exit(100);
	}
}

/**
 * main - a file will be copied from one to another file.
 * @argc: Total number of arguments.
 * @argv: points array to arguments.
 *
 * Return: 0 on success.
 *
 * Description: when the argument count is not right - exit code 97.
 *              when file_from does'nt exist - exit code 98.
 *              when file_to can't be developed - exit code 99.
 *              when file_to or from can't close down - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, rr, ww;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rr = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Cannot read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		ww = write(to, buffer, rr);
		if (to == -1 || ww == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Cannot write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rr = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rr > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

