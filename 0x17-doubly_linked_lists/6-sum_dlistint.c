#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of a linked list.
 * @head: head pointer points at 1st node
 * Return: if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int Sum = 0;
	dlistint_t *holder = head;

	while (holder)
	{
		Sum = Sum + holder->n;
		holder = holder->next;
	}

	return (Sum);
}
