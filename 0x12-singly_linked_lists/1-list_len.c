#include<stdlib.h>
#include "lists.h"
/**
 * list_len - returns number of elements in a linked list.
 * @h: pointer to lisy_t list.
 * Return: number of elements in linked list.
 */

size_t list_len(const list_t *h)
{
	size_t list;

	list = 0;
	while (h != NULL)
	{
		h = h->next;
		list++;
	}
	return (list);
}
