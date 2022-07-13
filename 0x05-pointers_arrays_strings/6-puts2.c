#include "main.h"

/**
 *  * puts2 - print string from first char
 *   * @str: string
 *    * Return: void
 */
void puts2(char *str)
{
	int asdf = 0;

	while (asdf >= 0)
	{
		if (str[asdf] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (asdf % 2 == 0)
			_putchar(str[asdf]);
		asdf++;
	}
}
