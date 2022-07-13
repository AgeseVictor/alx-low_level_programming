#include "main.h"
#include <stdio.h>

/**
 *  * print_array - print n elment
 *   * @a: array
 *    * @n: elements
 *     * Return: void
 */
void print_array(int *a, int n)
{
	int j = 0;

	for (; j < n; j++)
	{
		printf("%d", *(a + j));
		if (j != (n - 1))
			printf(", ");
	}
	printf("\n");
}
