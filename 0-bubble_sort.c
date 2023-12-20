#include "sort.h"

/**
 * bubble_sort - sorts an array in ascending order
 * using the Bubble Sort method
 * @array: the array to be sorted
 * @size: size of the array
 **/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array[j], array[j + 1]);
				print_array(array, size);
			}
		}
	}
}