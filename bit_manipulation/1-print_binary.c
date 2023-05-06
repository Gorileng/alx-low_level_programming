#include "main.h"

/**
 * print_binary - The binary of a dec number will be printed
 * @n: Binary number to print
 */

void print_binary(unsigned long int n)
{

	if (n > 1)
	{
	print_binary(n >> 1);
	}

	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}


}
