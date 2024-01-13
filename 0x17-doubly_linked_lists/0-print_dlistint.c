#include "lists.h"

/**
 * print_dlistint - func prints all dlistint_t list elements
 * @h: head list pointer
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num_nodes;

	num_nodes = 0;

	if (h == NULL)
	{
		return (num_nodes);
	}

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
