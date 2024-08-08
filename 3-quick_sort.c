#include "sort.h"
#include <stdio.h>

/**
 * swap - swap the values of two integers
 * @x: take 'y' as parameter
 * @y: take 'x' as parameter
 */
void swap(int *array, int x, int y)
{
	int tmp;

	tmp = array[x];
	array[x] = array[y];
	array[y] = tmp;
}

/**
 * partition - choose pivot
 * @array: an array given
 * @low: low int
 * @high: high int
 * Return: inti
 */
int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;

	for (int j = low; j <= high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(array, i, j);
		}
	}
	swap(array, i + 1, high);
	return (i + 1);
}
/**
 * quicksort_rec - sort recursively
 * @array: an array given
 * @low: low int
 * @high: high int
 */
void quicksort_rec(int array[], int low, int high)
{
	int pivot_idx;

	if (low < high)
	{
		pivot_idx = partition(array, low, high);
		quicksort_rec(array, low, pivot_idx - 1);
		quicksort_rec(array, pivot_idx + 1, high);
	}
}
/**
 * quick_sort - sorts an array of integers in ascd order
 * @array: an array given
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quicksort_rec(array, 0, (int)size - 1);
	print_array(array, size);
}
