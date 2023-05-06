#include "main.h"

/**
 * print_binary - The binary of a dec number will be printed
 * @p: Binary number to print
 */
void print_binary(unsigned long int p)
{

	if (p > 1)
	{
	print_binary(p >> 1);
	}

	if (p & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}


}
