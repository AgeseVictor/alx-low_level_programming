#include "lists.h"
/**
 * findloop - find loop in the linked list
 * @head: pointer to linked list
 * Return: 1 loop found 0 no loop
 */
int findloop(const listint_t *head)
{
const listint_t *start, *end;
start = end = head;
while (start != NULL && end != NULL)
{
start = start->next;
end = end->next->next;
if (start == end)
return (1);
}
return (0);
}
/**
 * count_nodes_loop - count number of nodes in the loop
 * @head: pointer to the listint_t list
 * Return: number of mnodes found
 */
int count_nodes_loop(const listint_t *head)
{
int nodes = 0;
const listint_t *start, *end;
start = end = head;
while (start != NULL && end != NULL)
{
start = start->next;
end = end->next->next;
nodes++;
if (start == end)
{
start = head;
while (start != end)
{
start = start->next;
end = end->next;
nodes++;
}
return (nodes);
}
}
return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: type listint_t pointer to head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
int size = 0, loop_exist;
size_t nodes = 0;
const listint_t *temp;
if (head == NULL)
exit(98);
loop_exist = findloop(head);
if (loop_exist == 1)
{
size = count_nodes_loop(head);
temp = head;
for (loop_exist = 0; loop_exist < size; loop_exist++)
{
printf("[%p] %d\n", (void *)temp, temp->n);
nodes += 1;
temp = temp->next;
}
printf("-> [%p] %d\n", (void *)temp, temp->n);
}
else if (loop_exist == 0)
{
temp = head;
while (temp != NULL)
{
printf("[%p] %d\n", (void *)temp, temp->n);
nodes += 1;
temp = temp->next;
}
}
return (nodes);
}
