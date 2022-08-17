#include "lists.h"

/**
 *  * print_listint - prints all the elements of a listint_t list
 *   * @h: value of list
 *    *
 *     * Return: any data type list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int node = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		node++;
	}
	return (node);
}
