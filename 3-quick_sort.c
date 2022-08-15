#include "sort.h"
/**
* partition_fx- divides a list based on pivot
* @array: list
* @lb: lowerbound of list
* @ub: upperbound of list
*/
unsigned long int partition_fx(int *array, int lb, int ub)
{
unsigned long int start = lb, end = ub;
int pivot = array[ub], tmp;

while (start < end)
{
	while (array[start] < pivot)
	{
		start++;
	}
	while (array[end] > pivot)
	{
		end--;
	}
	if (start < end)
	{
		tmp = array[start];
		array[start] = array[end];
		array[end] = tmp;
	}
}
tmp = array[ub];
array[ub] = array[end];
array[end] = tmp;

return (end);
}

