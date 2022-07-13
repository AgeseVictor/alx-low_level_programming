#include "main.h"

/**
 *  * swap_int - swap the values of two integer
 *   * @a: as int
 *    * @b: as int
 *     * Return: void
 */
void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
