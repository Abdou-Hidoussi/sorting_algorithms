#include "sort.h"
/**
 * bubble_sort - sort array
 * @array: int
 * @size: size_t
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i;

	for (i = 0; i < size; i++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
			}
			print_array(array, size);
		}
	}
}
