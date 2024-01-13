#include "lists.h"

/**
 * free_dlistint - func frees dlistint_t list
 * @head: list head pointer
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *head_ptr;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	}

	while ((head_ptr = head) != NULL)
	{
		head = head->next;
		free(head_ptr);
	}
}
