#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of
 * integers using the Linear search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * If value is not present in array or if array is NULL return -1.
 *
 * Return: first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	/* Check if the input array is NULL */
	if (array == NULL)
		return (-1);

	/* iterate through the array */
	for (i = 0; i < size; i++)
	{
		/* print the comparison being made */
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/* if value is found return the index */
		if (array[i] == value)
			return (i);
	}
	/* Value not found in the array */
	return (-1);
}
