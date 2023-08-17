#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns nth node of list
 * @head: head pointer points at 1st node
 * @index: is the index of the node tarting from 0
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int iteratation;

	for (iteratation = 0; head != NULL; iteratation++)
	{
		if (iteratation == index)
		{
			return (head);
		}
		head = head->next;
	}

	return (NULL);
}
