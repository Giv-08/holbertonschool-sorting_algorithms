#include <stdio.h>
#include "sort.h"

/**
 * swap - Swaps two integers in an array.
 * @x: The index of the first integer.
 * @y: The index of the second integer.
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * lomuto_partition - Partitions the array using Lomuto's scheme.
 * @array: The array of integers.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @size: size of array
 * Return: The index of the pivot after partitioning.
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low, j = low;

	while (j < high)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
		j++;
	}
	if (i != high)
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
	return (i);
}

/**
 * quick_sort_recursive - Recursively sorts the array using Quick sort.
 * @array: The array of integers.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @size: size of array.
 */
void quick_sort_recursive(int *array, size_t size, int low, int high)
{
	int pivot;

	if (high - low > 0)
	{
		pivot = lomuto_partition(array, size, low, high);
		quick_sort_recursive(array, size, low, pivot - 1);
		quick_sort_recursive(array, size, pivot + 1, high);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order.
 * @array: The array of integers.
 * @size: The number of elements in the array.
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick_sort_recursive(array, size, 0, (int)size - 1);
}
