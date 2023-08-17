#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: Number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int index = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	index++;
	}

	return (index);
}
