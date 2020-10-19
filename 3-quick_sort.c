#include "sort.h"
/**
 * sort_array - sort an array of int
 * @array: sorted elemt
 * @x: left elem
 * @y: right elem
 * @size: size of
 * Description: Sort an array of integer
 */
void sort_array(int *array, int x, int y, int size)
{
	int i;

	if (array[x] == array[y])
		return;
	i = array[x];
	array[x] = array[y];
	array[y] = i;
	print_array(array, size);
}

/**
 * sort_part - sort array partition
 * @array: elements to be sorted
 * @x: left side
 * @y: right side
 * @size: size of array
 * Description - sort an array partition
 * Return: sorted array
 */
int sort_part(int *array, int x, int y, int size)
{
	int s = array[y];
	int i = x;
	int j;

	for (j = x; j < y; j++)
		if (array[j] < s)
			sort_array(array, i++, j, size);
	sort_array(array, i, y, size);
	return (i);
}

/**
 * quick_core - quick sort core
 * @array: elements to be sorted
 * @x: left
 * @y: right
 * @size: size
 *Description - recursive to quick sort
 */
void quick_core(int *array, int x, int y, int size)
{
	if (x < y)
	{
		int s = sort_part(array, x, y, size);

		quick_core(array, x, s - 1, size);
		quick_core(array, s + 1, y, size);
	}
}

/**
 * quick_sort - sorts an array of integers
 * @array: elements to be sorted
 * @size: size of
 * Description - sort an array of integers
 */
void quick_sort(int *array, size_t size)
{
	quick_core(array, 0, size - 1, size);
}
