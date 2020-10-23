#include "sort.h"
/**
 * swap - two values
 * @array: array to sort
 * @x: first val
 * @y: second val
 * @size: size of array
 * Return: nothing
 */
void swap(int *array, int *x, int *y, size_t size)
{
	int tmp;

	if (x != y)
	{
		tmp = *x;
		*x = *y;
		*y = tmp;
		print_array(array, size);
	}
}

/**
 * heapify - find largest root
 * @array: array
 * @i: start
 * @j: end
 * @size: previws
 * Description - find largest amond
 * Return: nothing
 */
void heapify(int *array, size_t i, size_t j, size_t size)
{
	int largest = i;
	int x = 2 * i + 1;
	int y = 2 * i + 2;

	if (x < (int) j && array[x] > array[largest])
		largest = x;
	if (y < (int) j && array[y] > array[largest])
		largest = y;
	if (largest != (int) i)
	{
		swap(array, &array[i], &array[largest], size);
		heapify(array, largest, j, size);
	}
}

/**
 * heap_sort - sort array
 * @array: array
 * @size: Pointer
 * Description - sort an array
 * Return: nothing
 */
void heap_sort(int *array, size_t size)
{
	int i, j;

	if (!array || size < 2)
		return;
	for (i = size / 2 - 1; i >= 0; i--)
		heapify(array, (size_t) i, size, size);
	for (j = size - 1; j >= 0; j--)
	{
		swap(array, &array[0], &array[j], size);
		heapify(array, 0, (size_t) j, size);
	}
}
