#include "main.h"

/**
 * clear_bit - sets 0 to the value of a given bit
 * @n: ptr for the number to alter
 * @index: to clear the index of the bit
 *
 * Return: 1 indicates success, -1 indicates failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

		if (index < sizeof(n) * 8)
		{
			*n = (*n & ~mask);
			return (1);
		}

		return (-1);
}
