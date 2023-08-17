#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new node at end of a list.
 * @head: head pointer points at 1st node
 * @n: new node elements
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *holder = *head;
	dlistint_t *EndNode;

	/* checking for empty list */
	if (head == NULL)
	{
		return (NULL);
	}

	EndNode = malloc(sizeof(dlistint_t));
	if (EndNode == NULL)
	{
		return (NULL);
	}

	EndNode->n = n;
	EndNode->next = NULL;

	if (*head == NULL)
	{
		EndNode->prev = NULL;
		*head = EndNode;

		return (EndNode);
	}

	while (holder->next != NULL)
	{
		holder = holder->next;
	}

	holder->next = EndNode;
	EndNode->prev = holder;

	return (EndNode);
}
