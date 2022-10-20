#include "search_algos.h"

/**
 * jump_list - searches for a value by Jump search algorithm ..
 * ... in a sorted list of integers
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: the value to search for
 * Return: pointer to located node, or else NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
int block = 0;
listint_t *temp, *posn;
if (size == 0 || !list)
return (NULL);
temp = list;
block = sqrt(size);
while (temp->n < value && temp->next)
{
posn = temp;
while (temp->next && block > 0)
{
temp = temp->next;
block--;
}
block = sqrt(size);
printf("Value checked at index[%lu] = [%d]\n", temp->index, temp->n);
}
printf("Value found between indexes [%lu] and [%lu]\n",
posn->index, temp->index);
while (posn->index <= temp->index)
{
printf("Value checked at index[%lu] = [%d]\n", posn->index, posn->n);
if (value == posn->n)
return (posn);
if (!posn->next)
break;
posn = posn->next;
}
return (NULL);
}
