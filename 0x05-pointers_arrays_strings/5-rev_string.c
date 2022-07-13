#include "main.h"

/**
 *  * rev_string - reverse a string
 *   * @s: str
 *    * Return: void
 */
void rev_string(char *s)
{
	int asdf = 0, i, j;
	char *str, temp;

	while (asdf >= 0)
	{
		if (s[asdf] == '\0')
			break;
		asdf++;
	}
	str = s;

	for (i = 0; i < (asdf - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
