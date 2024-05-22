#include "search_algos.h"

/**
 * print_array - Function prints an array
 * @arr: Pointer to first element of an array
 * @start: First index of arr
 * @end: Last index of arr
 */

void print_array(int *arr, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("%d\n", arr[end]);
}

/**
 * binary_search - Searches for a value in an array using Binary search
 * @array: Pointer to first element of an array
 * @size: The number of elements in array
 * @value: Value to search for
 * Return: -1 if array is NULL or value is not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		size_t mid = (left + right) / 2;

		print_array(array, left, right);
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
		{
			right = mid - 1;
		}
		else
			left = mid + 1;
	}

	return (-1);
}
