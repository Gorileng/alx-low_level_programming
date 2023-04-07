#include "main.h"

/**
 * print_binary - it will print the binary that is equivalent to a decimal number
 * @nm: the number to print specifically in binary
 */
void print_binary(unsigned long int nm)
{
	int j, count = 0;
	unsigned long int current;

	for (j = 63; j >= 0; j--)
	{
		current = nm >> j;

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

