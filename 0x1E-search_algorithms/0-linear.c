#include "search_algos.h"

/**
 * linear_search - the linet search algorithm
 * @array: The array of the intended values
 * @size: the size of the array
 * @value: Thw value to look for
 * Return: 1 on success otherwise 0
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
