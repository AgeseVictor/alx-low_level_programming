#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of list
 * @head: pointing to head of list
 * @n: value to store at the new node
 * Return: pointer to the new node in the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
