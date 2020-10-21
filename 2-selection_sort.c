#include "sort.h"
#include <stdio.h>
/**
 * selection_sort - sort array
 * @array: array of int
 * @size: size_t
 */
void selection_sort(int *array, size_t size)
{
	size_t n, i = 0;
	int tmp, mip, min;

	if (size == 0 || size == 1)
	{
		return;
	}
	for (n = 0; n < size - 1; n++)
	{
		min = array[n];
		mip = n;
		for (i = n; i < size; i++)
		{
			if (min > array[i])
			{
				min = array[i];
				mip = i;
			}
		}
		tmp = array[n];
		array[n] = min;
		array[mip] = tmp;
		print_array(array, size);
	}
}
