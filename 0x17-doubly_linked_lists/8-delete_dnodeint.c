#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index of Dlist
 * @head: head pointer points at 1st node
 * @index: is the index of the node tarting from 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *dnode;
	dlistint_t *temp;
	unsigned int iterator = 0;
	unsigned int position = index;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (position == 0)
	{
		dnode = temp;
		*head = temp->next;

		if (temp->next)
		{
			temp->next->prev = NULL;
		}

		free(dnode);
		return (1);
	}

	while (temp != NULL)
	{
		if (iterator == position - 1 && temp->next)
		{
			dnode = temp->next;
			temp->next = dnode->next;
			if (temp->next)
			{
				temp->next->prev = temp;
			}

			free(dnode);
			return (1);
		}
	iterator++, temp = temp->next;
	}
	return (-1);
}
