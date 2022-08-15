#include "sort.h"
/**
* swap- swaps two nodes
* @x: node 1
* @y: node 2
*
* Return: void
*/
void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
* partition- divides a list based on pivot
* @array: list
* @low: lowerbound of list
* @high: upperbound of list
* @n: size of array
*
* Return: pivot point
*/
size_t partition(int *array, size_t low, size_t high, size_t n)
{
	int pivot = array[high];
	size_t i = low, j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}

	swap(&array[i], &array[high]);
	print_array(array, n);
	return (i);
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
void quicker_sort(int *array, size_t low, size_t high, size_t n)
{
	if (low < high)
	{
		size_t pivot = partition(array, low, high, n);

		if (pivot != 0)
		{
			quicker_sort(array, low, pivot - 1, n);
		}
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
