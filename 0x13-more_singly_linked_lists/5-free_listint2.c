#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: type listint_t pointer to a pointer to head
 */

void free_listint2(listint_t **head)
{
listint_t *headcp = *head, *next;
while (headcp != NULL)
{
next = headcp->next;
free(headcp);
headcp = next;
}
*head = NULL;
}
