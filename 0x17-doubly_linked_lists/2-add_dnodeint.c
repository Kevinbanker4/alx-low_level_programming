#include "lists.h"

/**
 * *add_dnodeint - a function that adds a new node
 * @head: head pointer points at 1st node
 * @n: new node element
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *AddedNode;

	/* checking for empty list */
	if (head == NULL)
	{
		return (NULL);
	}

	AddedNode = malloc(sizeof(dlistint_t));
	if (AddedNode == NULL)
	{
		return (NULL);
	}

	AddedNode->n = n;
	AddedNode->prev = NULL;
	AddedNode->next = *head;

	if (*head)
	{
		(*head)->prev = AddedNode;
	}

	*head = AddedNode;
	return (AddedNode);
}
