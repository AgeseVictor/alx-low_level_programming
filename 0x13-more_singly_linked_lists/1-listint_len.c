#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: instance of struct list data type
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
int nodes = 0;
for (nodes = 0; h; nodes++)
h = h->next;
return (nodes);
}
