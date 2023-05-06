#include "main.h"

/**
 * get_endianness -  The machine will check if is little or big endian
 * Return: 1 indicates little, 0 indicates big
 */
int get_endianness(void)
{
	int index;

	index = 2;

	if (index & 1)
	{
		return (0);
	}

	return (1);
}
