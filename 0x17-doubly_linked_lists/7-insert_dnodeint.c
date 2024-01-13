#include "lists.h"

/**
 * insert_dnodeint_at_index - func inserts new node at
 * specific position
 * @h: list head pointer
 * @idx: new node index
 * @n: new node value
 * Return: new node address (Success), or fail (NULL)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_elem;
	dlistint_t *head;
	unsigned int a;

	new_elem = NULL;
	if (idx == 0)
		new_elem = add_dnodeint(h, n);
	else
	{
		head = *h;
		a = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (a == idx)
			{
				if (head->next == NULL)
					new_elem = add_dnodeint_end(h, n);
				else
				{
					new_elem = malloc(sizeof(dlistint_t));
					if (new_elem != NULL)
					{
						new_elem->n = n;
						new_elem->next = head->next;
						new_elem->prev = head;
						head->next->prev = new_elem;
						head->next = new_elem;
					}
				}
				break;
			}
			head = head->next;
			a++;
		}
	}

	return (new_elem);
}
