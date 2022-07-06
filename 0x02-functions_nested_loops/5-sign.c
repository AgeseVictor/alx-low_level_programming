#include "main.h"

/**
 *  * print_sign - sign of a number.
 *   *
 *    * @n: n is integer
 *     * Return: 1 +, cer0 , -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
