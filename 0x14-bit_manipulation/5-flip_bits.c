#include "main.h"

/**
 * flip_bits - it will count the number of bits to change
 * getting from one number to another
 * @d: first number
 * @e: second number
 *
 * Return: for the number of bits to change
 */
unsigned int flip_bits(unsigned long int d, unsigned long int e)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = d ^ e;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}

