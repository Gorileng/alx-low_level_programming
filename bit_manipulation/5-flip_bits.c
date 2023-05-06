#include "main.h"

/**
 * flip_bits - It counts the number of bits to alter
 * from one number to the other
 * @n: first number
 * @s: second number
 *
 * Return: alters the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int s)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ s;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}
