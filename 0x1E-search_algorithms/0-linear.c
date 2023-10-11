#include "search_algos.h"

/**
 * linear_search - searches for the value in the array using Linear search algo
 * @array: pointer for the first element of an array to search in
 * @size: numbers of the elements in an array
 * @value: values to search for
 *
 * Return: first index where the value is located, or -1 on the failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int tmp;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			tmp = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, tmp);
			if (tmp == value)
				return (i);
		}
	}
	return (-1);
}
