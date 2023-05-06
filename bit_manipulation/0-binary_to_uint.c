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
	unsigned int ui;
	int len, base_two;

	if (!a)
		return (0);

	ui = 0;

	for (len = 0; a[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (a[len] != '0' && a[len] != '1')
		{
			return (0);
		}

		if (a[len] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
