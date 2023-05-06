#include "main.h"

/**
 * set_bit - The given index to 1 will set a bit
 * @n: Ptr to the number to alter
 * @index: Set to 1 for the index of the bit
 *
 * Return: 1 indicates success, -1 indicates failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
