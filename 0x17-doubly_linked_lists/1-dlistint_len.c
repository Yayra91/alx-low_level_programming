#include "lists.h"

/**
 * dlistint_len - func returns double linked list number
 * of elements
 * @h: head list pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
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
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
