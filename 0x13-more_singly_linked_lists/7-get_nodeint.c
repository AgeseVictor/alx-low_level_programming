#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: type listint_t pointer to a pointer to head
 * @index: is the index of the node, starting at 0
 * Return: returns the nth node listint_t list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int c = 0;
listint_t *headcp = head;
for (c = 0 ; (c < index) && headcp; c++)
headcp = headcp->next;
return (headcp);
}
