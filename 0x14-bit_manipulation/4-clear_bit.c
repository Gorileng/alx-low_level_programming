#include "main.h"

/**
 * clear_bit - it will set the value of a bit to 0
 * @a: points the number to change
 * @index: index the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *a, unsigned int index)
{
	if (index > 63)
		return (-1);

	*a = (~(1UL << index) & *a);
	return (1);
}


