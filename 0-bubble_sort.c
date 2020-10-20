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

while (is_sorted(array, size))
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
/**
 * is_sorted - check if array sorted
 * @array: int
 * @size: size_t
 * Return: 1 or 0
 */
int is_sorted(int *array, size_t size)
{
size_t i;

for (i = 0; i < size - 1; i++)
{
if (array[i] > array[i + 1])
{
return (1);
}
}
return (0);
}
