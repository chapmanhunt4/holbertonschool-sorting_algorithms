#include "sort.h"

/**
 * selection_sort - sorts an array of integers using the
 * selection sort algorithm
 * @array: an array of the integers given
 * @size: size of the array
 **/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
	}
	for (j = i + 1; j < size; j++)
	{
		if (array[j] < array[min])
		{
			min = j;
		}
	print_array(array, size);
	}
	temp = array[min];
	array[i] = array[min];
	array[min] = temp;
}
