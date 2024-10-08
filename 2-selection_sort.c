#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
*swap - Swaps two elements in an array
*@array: The array to swap elements in
*@i: The index of the first element to swap
*@j: The index of the second element to swap
*/
void swap(int *array, size_t i, size_t j)
{
int temp;
temp = array[i];
array[i] = array[j];
array[j] = temp;
}
/**
*selection_sort - Sorts an array of integers in ascending order
*@array: The array to sort by
*@size: The size of the array
*/
void selection_sort(int *array, size_t size)
{
size_t i, j, min_idx;
for (i = 0; i < size - 1; i++)
{
min_idx = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_idx])
min_idx = j;
}
if (min_idx != i)
{
swap(array, i, min_idx);
print_array(array, size);
}
}
}

