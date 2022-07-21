#include "main.h"

/**
 *  * helper - square root of number
 *   * @i: input number
 *    * @j: iterator
 *     * Return: square root or -1
 */
int helper(int i, int j)
{
	if (j % (i / j) == 0)
	{
		if (j * (i / j) == i)
			return (j);
		else
			return (-1);
	}
	return (0 + helper(i, j + 1));
}

/**
 *  * _sqrt_recursion - returns the natural square root of a number
 *   * @n: number
 *    * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (helper(n, 2));
}
