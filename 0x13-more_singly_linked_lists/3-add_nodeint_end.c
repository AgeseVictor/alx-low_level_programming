#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: pointing to head of list
 * @n: value to store at the new node
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *headcp = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (headcp->next != NULL)
headcp = headcp->next;
headcp->next = new;
return (new);
}
