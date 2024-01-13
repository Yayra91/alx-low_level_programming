#include "lists.h"

/**
 * get_dnodeint_at_index - func returns nth
 * node of dlistint_t linked list
 * @head: list head pointer
 * @index: nth node index
 * Return: nth node (Success), or fail (NULL)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head->prev != NULL)
	{
		head = head->prev;
	}

	a = 0;

	while (head != NULL)
	{
		if (a == index)
			break;
		head = head->next;
		a++;
	}

	return (head);
}
