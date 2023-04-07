#include "main.h"

/**
 * get_endianness - will check if a machine is bigger or smaller
 * Return: 0 for bigger, 1 for smaller
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *k = (char *) &j;

	return (*k);
}


