#include "sort.h"
/**
* bubble_sort- sorts an array of int in ascending order
* @array: array to be sorted
* @size: number of items in array
*
* Return: Void
*/
void bubble_sort(int *array, size_t size)
{
if (size > 1)
{
int check;
unsigned long int i, j, tmp;

for (i = 0; i < size; i++)
{
	check = 0;
	for (j = 1; j < size; j++)
	{
		if (array[j] < array[j - 1])
		{
			check = 1;
			tmp = array[j];
			array[j] = array[j - 1];
			array[j - 1] = tmp;
			print_array(array, size);
		}
		else
		{
			continue;
		}
	}
	if (check == 0)
		break;
}
}
}
