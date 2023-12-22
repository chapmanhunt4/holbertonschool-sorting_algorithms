#include "sort.h"

/**
 * partition - partitions an array
 * @array: the array  being partitioned
 * @low: the first index in the array
 * @high: the last index in the array
 * @size: the size of the array
 * Return: the index of the partition
*/


int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = (low - 1), j, temp;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	if (array[high] != array[i + 1])
	{
		temp = array[high];
		array[high] = array[i + 1];
		array[i + 1] = temp;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * sorter - recursively sorts the array
 * @array: the array
 * @low: the lowest index of the  array
 * @high: the highest index of the  array
 * @size: the size of the array
*/

void sorter(int *array, int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = partition(array, low, high, size);

		sorter(array, low, i - 1, size);
		sorter(array, i + 1, high, size);
	}
}

/**
 * quick_sort - calls sort to recursively sort an array
 * @arr: the array to be sorted
 * @size: the size of the array
*/

void quick_sort(int *arr, size_t size)
{

	int high = size - 1, low = 0;

	sorter(arr, low, high, size);
}
