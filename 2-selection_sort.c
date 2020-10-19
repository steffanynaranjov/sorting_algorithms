#include "sort.h"
/**
 * selection_sort - Sorts an array
 * @array: integer
 * @size: Pointer to the previous element
 *
 * Description: Sorts an array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t x = 0, y = 0;
	int tmp, i;

	if (!array || !size)
		return;
	for (; y < size - 1; y++)
	{
		tmp = array[y];
		for (x = y + 1; x < size; x++)
		{
			if (array[x] < tmp)
			{
				tmp = array[x];
				i = x;
			}
		}
		if (array[y] > tmp)
		{
			array[i] = array[y];
			array[y] = tmp;
			print_array(array, size);
		}
	}
}
