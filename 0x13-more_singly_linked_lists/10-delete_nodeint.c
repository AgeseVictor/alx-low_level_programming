#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: type listint_t list pointer to a pointer to head
 * @index:  is the index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int node;
listint_t *movehead = *head, *prev = NULL;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
*head = movehead->next;
free(movehead);
return (1);
}
for (node = 0; node < index; node++)
{
if (movehead == NULL)
return (-1);
prev = movehead;
movehead = movehead->next;
}
if (prev)
prev->next = movehead->next;
free(movehead);
return (1);
}
