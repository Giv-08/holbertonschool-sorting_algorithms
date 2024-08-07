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
	size_t i = 0;
	int tmp, flag = 0;

	if (!array || size < 2)
	{
		return;
	}
	while (flag == 0)
	{
		flag = 1;
		while (i < size - i - 1)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				flag = 0;
			}
			i++;
		}
	}
}
