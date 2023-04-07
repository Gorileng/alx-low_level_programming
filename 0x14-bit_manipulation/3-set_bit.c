#include "main.h"

/**
 * set_bit - it sets a bit within a given index to 1
 * @xyz: points the number to change
 * @index: the index of the bit will set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *xyz, unsigned int index)
{
	if (index > 63)
		return (-1);

	*xyz = ((1UL << index) | *xyz);
	return (1);
}
