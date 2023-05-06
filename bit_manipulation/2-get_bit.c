#include "main.h"

/**
 * get_bit - bit will be returned in an index of a dec number
 * @n: searches the number
 * @index: bit of the index
 *
 * Return: the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	mask <<= index;

	if (mask & n)
		return (1);
	else
		return (0);
}
