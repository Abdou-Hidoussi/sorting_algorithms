#include "sort.h"
#include <stdio.h>
/**
 * selection_sort - sort array
 * @array: array of int
 * @size: size_t
 */
void selection_sort(int *array, size_t size)
{
	size_t n, i, min;
	int tmp;

	if (size == 0 || size == 1)
	{
		return;
	}
	for (n = 0; n < size - 1; n++)
	{
		min = n;
		for (i = n + 1; i < size; i++)
		{
			if (array[min] > array[i])
			{
				min = i;
			}
		}
		if (min != n)
		{
			tmp = array[n];
			array[n] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}

	}
}
