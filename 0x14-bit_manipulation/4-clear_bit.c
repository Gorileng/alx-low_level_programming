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
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
