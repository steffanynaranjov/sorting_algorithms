#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers
 * @array: Array
 * @size: Pointer to the previous element
 *
 * Description: Sorts an array of integers
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t x;
	int tmp,  flag;

	if (array == NULL || size < 2)
		return;
	while (flag)
	{
		flag = 0;
		for (x = 0; x < (size - 1); x++)
			if (array[x] > array[x + 1])
			{
				tmp = array[x];
				array[x] = array[x + 1];
				array[x + 1] = tmp;
				flag = 1;
				print_array(array, size);
			}
	}
}
