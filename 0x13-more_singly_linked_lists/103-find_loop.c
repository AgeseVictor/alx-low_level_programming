#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: pointer to head of list
  * Return: address of the node where the loop starts, or NULL no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *start = head, *end = head;
while (start != NULL && end != NULL)
{
start = start->next;
end = end->next->next;
if (start == end)
{
start = head;
while (start != end)
{
start = start->next;
end = end->next;
}
return (start);
}
}
return (NULL);
}
