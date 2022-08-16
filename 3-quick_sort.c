#include "sort.h"
/**
* partition- divides a list based on pivot
* @array: list
* @low: lowerbound of list
* @high: upperbound of list
* @n: size of array
*
* Return: pivot point
*/
int partition(int *array, int low, int high, size_t n)
{
  	int tmp, i;
	int j;

	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] < array[high])
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, n);
			}
		}
	}

	if (array[high] < array[i + 1])
	{
		tmp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = tmp;
		print_array(array, n);
	}

	return (i + 1);
}

/**
* quicker_sort- implements quick sort algorithm
* @array: list
* @low: lowerbound of list
* @high: upperbound of list
* @n: size of array
*
* Return: Void
*/
void quicker_sort(int *array, int low, int high, size_t n)
{
    int pivot;
	if (low < high)
	{
		pivot = partition(array, low, high, n);
		quicker_sort(array, low, pivot - 1, n);
		quicker_sort(array, pivot + 1, high, n);
	}
}

/**
* quick_sort- uses quicker sort to sort a list
* @array: list
* @size: size of array
*
* Return: Void
*/
void quick_sort(int *array, size_t size)
{
	if (size > 2)
	{
		quicker_sort(array, 0, size - 1, size);
	}
}
