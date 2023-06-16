#include "main.h"
<<<<<<< HEAD

/**
 * close_file - closes the file and checks if it was indeed succesfull
 * @fd: A file descriptor
=======
#include <stdio.h>
#include <stdlib.h>





char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - 1024 will be allocated bytes for a buffer.
 * @file: The file buffer is storing characters for.
 *
 * Return: Pointer to be allocated to the new buffer.
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
 * close_file - It will close file descriptors.
 * @fd: A file descriptor to  close.
>>>>>>> 54e402488c01221f324d87f0a81fc651de9a65b0
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close fd %d\n", fd);
		exit(100);
	}
}

/**
<<<<<<< HEAD
 * error_handler - returns the exit status
 * @fd: A file descriptor
 * @fname: A file descriptor
 * @type: type of the system call
 * @buffer: buffer to be free
 * Return: 0 success, exit on error
=======
 * main - Copy the contents of the file to the other file.
 * @argc: number of arguments will be supplied to the program.
 * @argv: array of pointers to arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is not correct - exit code 97.
 *              If file_from do not exist or can't be read - exit code 98.
 *              If file_to can't be created or written to - exit code 99.
 *              If file_to or file_from can't be closed - exit code 100.
>>>>>>> 54e402488c01221f324d87f0a81fc651de9a65b0
 */
int error_handler(int fd, char *fname, int type, char *buffer)
{
	int status = 0;
	(void)fd;

	switch (type)
	{
	case READ_ERROR:
		dprintf(STDERR_FILENO,
			"Error: Cannot read from file %s\n", fname);
		if (buffer != NULL)
			free(buffer);
