#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * ... in a sorted list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: the value to search for
 * Return: pointer to located node, or else NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *temp, *posn;
if (!list)
return (NULL);
temp = list;
while (temp->n < value && temp->next)
{
posn = temp;
if (temp->express)
temp = temp->express;
else
{
while (temp->next)
temp = temp->next;
}
if (temp->next)
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
