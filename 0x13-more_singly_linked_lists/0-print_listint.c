#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: instance of struct list data type
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
int nodes = 0;
while (h != NULL)
{
if (!(h->n) && h->n != 0)
printf("[0] (nil)\n");
else
printf("%d\n", h->n);
nodes++;
h = h->next;
}
return (nodes);
}
