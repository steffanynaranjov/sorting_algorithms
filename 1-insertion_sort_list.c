#include "sort.h"
/**
 * swap_nodes - swap to doubly linked list elements
 * @list: head element
 * @x: first node
 * @y: second node
 * Return: A pointer
 */
void swap_nodes(listint_t **list, listint_t *x, listint_t *y)
{
	if (y->next)
		y->next->prev = x;
	if (x->prev)
		x->prev->next = y;
	else
		*list = y;
	x->next = y->next;
	y->prev = x->prev;
	y->next = x;
	x->prev = y;
	x = y->prev;
}

/**
 * insertion_sort_list - sort a doble linked list of integers.
 * @list: a pointer to the head
 * Description: sort a double linked list of integers
 * Return - nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *x, *tmp;

	if (!list || !*list || !(*list)->next)
		return;

	for (x = (*list)->next; x; x = tmp)
	{
		tmp = x->next;
		while (x->prev && x->n < x->prev->n)
		{
			swap_nodes(list, x->prev, x);
			print_list((const listint_t *)*list);
		}
	}
}
