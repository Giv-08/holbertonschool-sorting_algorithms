#include "sort.h"

/**
 * bubble_sort - sorts array in ascending order
 * @array: array to be sorted
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp;
	int flag = 0;

	if (array == NULL)
		return;

	while (flag >= 0)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i + 1] < array[i])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				flag++;
				print_array(array, size);
			}
		}
		if (flag == 0)
		{
			flag = -1;
		}
		else
		{
			flag = 0;
		}
	}
}
