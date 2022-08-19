#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: type listint_t pointer to a pointer to head
 * @idx:  is the index of the list
 * @n: value to be added to newly inserted node
 * Return: pointer to newly inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int node;
listint_t *headcp = *head, *new, *prev = NULL;
for (node = 0; headcp; node++)
headcp = headcp->next;
new = malloc(sizeof(listint_t));
if ((new == NULL) || (idx > node))
return (NULL);
new->n = n;
headcp = *head;
for (node = 0; (node < idx) && headcp; node++)
{
prev = headcp;
headcp = headcp->next;
}
if (prev != NULL)
{
prev->next = new;
}
new->next = headcp;
if (idx == 0)
*head = new;
return (new);
}
