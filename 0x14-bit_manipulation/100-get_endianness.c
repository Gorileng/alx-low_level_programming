#include "main.h"

/**
 * get_endianness -  The machine will check if is little or big endian
 * Return: 1 indicates little, 0 indicates big
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

