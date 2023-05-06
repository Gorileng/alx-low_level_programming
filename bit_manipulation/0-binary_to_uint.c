#include "main.h"

/**
 * binary_to_uint - unsigned int binary will be converted
 *
 * @a: Ptr to the string of characters
 *
 * Return: Converts the number
 */

unsigned int binary_to_uint(const char *a)
{
	int j;
	unsigned int dec_val = 0;

	if (!a)
		return (0);

	for (j = 0; a[j]; j++)
	{
		if (a[j] < '0' || a[j] > '1')
			return (0);
		dec_val = 2 * dec_val + (a[j] - '0');
	}

	return (dec_val);
}

