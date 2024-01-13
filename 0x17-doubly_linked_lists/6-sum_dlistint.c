#include "lists.h"

/**
 * sum_dlistint - func returns sum of all doubly linked
 * list data (n)
 * @head: list head pointer
 * Return: data sum (Success) or if empty (0)
 */
int sum_dlistint(dlistint_t *head)
{
	int data_sum;

	data_sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}

		while (head != NULL)
		{
			data_sum += head->n;
			head = head->next;
		}
	}

	return (data_sum);
}
