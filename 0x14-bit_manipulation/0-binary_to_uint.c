#include "main.h"

/**
 * binary_to_uint - this it converts a binary number to unsigned int
 * @k: the string contains binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *k)
{
	int i;
	unsigned int dec_val = 0;

	if (!k)
		return (0);

	for (i = 0; k[i]; i++)
	{
		if (k[i] < '0' || k[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (k[i] - '0');
	}

	return (dec_val);
}
