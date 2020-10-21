#include "sort.h"
/**
 * quick_sort - sort array
 * @array: array of int
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
	{
		return;
	}

	quick(array, 0, size - 1, size);
}
/**
 * quick - sort array
 * @array: array of int
 * @size: size of array
 * @l: lef most cell
 * @r: right most cell
 */
void quick(int *array, int l, int r, size_t size)
{
	int i;

	if (l >= r)
	{
		return;
	}


	i = sort(array, l, r, size);
	quick(array, l, i - 1, size);
	quick(array, i + 1, r, size);
}
/**
 * sort - divide array ???
 * @array: array of int
 * @size: size of array
 * @l: lef most cell
 * @r: right most cell
 * Return: the position of the sorted piv ???
 */
int sort(int *array, int l, int r, size_t size)
{
	int i = l, j, piv = array[r];

	for (j = l; j < r; j++)
	{
		if (array[j] <= piv)
		{
			sw(array, i, j, size);
			i++;
		}
	}
	sw(array, i, r, size);
	return (i);
}
/**
 * sw - swap elemnts
 * @array: array of int
 * @size: size of array
 * @l: lef most cell
 * @r: right most cell
 */
void sw(int *array, int r, int l, size_t size)
{
	int tmp;

	tmp = array[r];
	array[r] = array[l];
	array[l] = tmp;
	if (r != l)
		print_array(array, size);
}
