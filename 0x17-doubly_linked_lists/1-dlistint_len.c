#include "lists.h"

/**
 * dlistint_len - A function that returns the number of
 * elements in a doubly linked list
 * @h: head pointer points at 1st node
 * Return: num of Nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
    int index;

    for (index = 0; h != NULL; index++, h = h->next)
        ;
    return (index);
}
