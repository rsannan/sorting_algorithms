#include "sort.h"
/**
* selection_sort-sorts an array using the Selection sort
* @array:array to sort
* @size: size of the array
*
* Return: Void
*/
void selection_sort(int *array, size_t size)
{
unsigned long int i, j, min_idx, tmp;

for (i = 0; i < size; i++)
{
	min_idx = i;
	for (j = i; j < size; j++)
	{
		if (array[j] < array[min_idx])
		{
			min_idx = j;
		}
	}
	if (min_idx != i)
	{
		tmp = array[i];
		array[i] = array[min_idx];
		array[min_idx] = tmp;
		print_array(array, size);
	}
}
}
