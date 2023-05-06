
#include "main.h"

/**
 * get_bit - it will return the value of a bit
 * @z: the number will search
 * @index: the index of bit
 *
 * Return: the value of thee bit
 */
int get_bit(unsigned long int z, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (z >> index) & 1;

	return (bit_val);
}


