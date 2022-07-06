#include "main.h"
/**
 *  * _isalpha - check a letter
 *   *
 *    * @c: letter u other
 *     *
 *      *Return: 1 if is letter 0 others
 */
int _isalpha(int c)
{
	if ((c > 66 && c < 91) || (c > 98 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
