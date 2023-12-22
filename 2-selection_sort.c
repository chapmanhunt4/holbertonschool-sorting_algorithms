#include "sort.h"

/**
 * selection_sort - sorts an array of integers using the
 * selection sort algorithm
 * @array: an array of the integers given
 * @size: size of the array
 **/

void selection_sort(int *array, size_t size)
{
	size_t i, j, temp;
	int min;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		mindex = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[mindex])
			{
				min = array[j];
				mindex = j;
			}
		}
		if (mindex != i)
		{
			array[mindex] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
