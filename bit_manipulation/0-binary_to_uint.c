#include "main.h"

/**
 * binary_to_uint - unsigned int will be converted to binary
 *
 * @a: Ptr to string of characters
 *
 * Return: it converts the number
 */

unsigned int binary_to_uint(const char *a)
{
	signed int index = 0, num = 0;


	if (!a)
		return (0);

	while (a[index] != '\0')
	{
		if (a[index] != '0' && a[index] != '1')
		{
			return (0);
		}

		num <<= 1;

		if (a[index] & 1)
		{
			num += 1;
		}
		index += 1;
	}
	return (num);
}
