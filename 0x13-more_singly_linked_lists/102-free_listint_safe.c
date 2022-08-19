#include "lists.h"
/**
 * count_nodes - count number of nodes in the loop
 * @head: pointer to the listint_t list
 * Return: number of nodes found
 */
int count_nodes(const listint_t *head)
{
int nodes = 0;
const listint_t *start = head, *end = head;
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
 * find_loop - find loop in the linked list
 * @head: pointer to linked list
 * Return: 1 loop found 0 no loop
 */
int find_loop(const listint_t *head)
{
const listint_t *start = head, *end = head;
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
 * free_listint_safe - function that frees a listint_t list.
 * @h: pointer to pointer to head of list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
int size = 0, loop_exist;
size_t nodes = 0;
listint_t *temp;
if (*h == NULL)
exit(98);
loop_exist = find_loop(*h);
if (loop_exist == 1)
{
size = count_nodes(*h);
temp = *h;
for (loop_exist = 0; loop_exist < size; loop_exist++)
{
nodes += 1;
temp = temp->next;
free(temp);
}
}
else if (loop_exist == 0)
{
temp = *h;
while (temp != NULL)
{
nodes += 1;
temp = temp->next;
free(temp);
}
}
return (nodes);
}
