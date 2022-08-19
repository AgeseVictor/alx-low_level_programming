#include "lists.h"

/**
 * sum_listint - the sum of all the data (n) of a listint_t linked list.
 * @head: type listint_t pointer to a pointer to head
 * Return: returns the sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
