#include "sort.h"
#include <stddef.h>
#include <stdio.h>

/**
 * bubble_sort - sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: array
 * @size: size of array
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, y = 0;
	int tmp;

	while (i < size - 1)
	{
		while (y < size - i - 1)
		{
			if (array[y] > array[y + 1])
			{
				tmp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = tmp;
				print_array(array, size);
			}
			y++;
		}
		i++;
	}
}
