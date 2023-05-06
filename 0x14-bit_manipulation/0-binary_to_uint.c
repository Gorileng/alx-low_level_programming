#include "main.h"

/**
 * binary_to_uint - unsigned int binary will be converted
 *
 * @b: Ptr to the string of characters
 *
 * Return: Converts the number
 */
unsigned int binary_to_uint(const char *b)
{
	signed int index = 0, num = 0;


	if (!b)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}

		num <<= 1;

		if (b[index] & 1)
		{
			num += 1;
		}
		index += 1;
	}
	return (num);
}
