#include "sort.h"
/**
 * shell_sort - Sorts an array
 * @array: Array
 * @size: Pointer to the previous element
 *
 * Description: Sorts an array of integers in ascending
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t g = 1, x, y;
	int tmp;

	if (!array || !size)
		return;
	while (g < size)
		g = (g * 3) + 1;
	g = (g - 1) / 3;
	for (; g > 0; g = (g - 1) / 3)
	{
		for (x = g; x < size; x++)
		{
			tmp = array[x];
			for (y = x; y >= g && array[y - g] > tmp; y -= g)
				array[y] = array[y - g];
			array[y] = tmp;
		}
		print_array(array, size);
	}
}
