#include "search_algos.h"

/**
  * binary_search - Search for the value in the sorted array
  * of the integers using a binary search.
  * @array: A pointer to first element of an array to search.
  * @size: The numbers of the elements in array.
  * @value: The values to be searched for.
  *
  * Return: When the value is not present or when the array is NULL, -1.
  *         Else, an index where the value is located.
  *
  * Desc: Print sub-array when searched every time it alters.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
