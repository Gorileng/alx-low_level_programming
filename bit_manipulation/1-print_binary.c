#include "main.h"

/**
 * print_binary - The binary of a dec number will be printed
 * @n: Binary number to print
 */
void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int current;

	for (j = 63; j >= 0; j--)
	{
		current = n >> j;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}


