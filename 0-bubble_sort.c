#include "sort.h"

/**
 * bubble_sort -  sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: pointer to an array of integers
 * @size: size of array of integers
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, size_t j;
	bool temp = true;

	if (array == NULL || size < 2)
		return;

	while (temp == false)
	{
		temp = true;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				temp = false;
			}
		}
		size--;
	}
}

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}