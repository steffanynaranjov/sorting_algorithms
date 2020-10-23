#ifndef _SORT_H
#define _SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);

void swap_nodes(listint_t **list, listint_t *x, listint_t *y);
void sort_array(int *array, int x, int y, int size);
int sort_part(int *array, int x, int y, int size);
void quick_core(int *array, int x, int y, int size);
void heapify(int *array, size_t i, size_t j, size_t size);
void swap(int *array, int *x, int *y, size_t size);



#endif
