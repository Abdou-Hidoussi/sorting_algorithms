#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - sort list
 * @list: listint_t
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *l = *list;

	while (l->next != NULL)
	{
		if (l->n < l->next->n)
		{
			l = l->next;
		}
		else
		{
			swap(l->prev, l, l->next, l->next->next);
			if (l->prev->prev == NULL)
			{
				*list = l->prev;
			}
			l = *list;
			print_list(*list);
		}

	}
}
/**
 * swap - swap list elements
 * @p: listint_t
 * @x: listint_t
 * @n: listint_t
 * @nn: listint_t
 */
void swap(listint_t *p, listint_t *x, listint_t *n, listint_t *nn)
{
	n->next = x;
	n->prev = p;

	x->next = nn;
	x->prev = n;

	if (p != NULL)
	{
		p->next = n;
	}
	if (nn != NULL)
	{
		nn->prev = x;
	}
}
