#include "lists.h"
/**
  * free_dlistint -  a function that free a dlistint_t list.
  * @head: head pointer points at 1st node
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *TempNode;

	while (head != NULL)

	{
		TempNode = head;
		head = head->next;
		free(TempNode);
	}
}
