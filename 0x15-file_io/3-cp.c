#include "main.h"

/**
 * close_file - closes the file and checks if it was indeed succesfull
 * @fd: A file descriptor
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
 * error_handler - returns the exit status
 * @fd: A file descriptor
 * @fname: A file descriptor
 * @type: type of the system call
 * @buffer: buffer to be free
 * Return: 0 success, exit on error
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
