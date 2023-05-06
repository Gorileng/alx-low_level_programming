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
	unsigned long int mask = 0, index;

	index = n ^ s;

	while (index > 0)
	{
		if (index & 1)
		{
			mask++;
		}
		index >>= 1;
	}
	return (mask);
}
