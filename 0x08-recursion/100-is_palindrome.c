#include "main.h"

/**
 *  * _strlen_recursion - length of string
 *   * @s: string
 *    * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 *  * compares - compare character of the string
 *   * @s: string
 *    * @j1: smallest iterator
 *     * @j2: biggest iterator
 *      * Return: .
 */
int compares(char *s, int j1, int j2)
{
	if (*(s + j1) == *(s + j2))
	{
		if (j1 == j2 || j1 == j2 + 1)
			return (1);
		return (0 + compares(s, j1 + 1, j2 - 1));
	}
	return (0);
}
/**
 *  * is_palindrome - detect string if palindrome
 *   * @s: string
 *    * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compares(s, 0, _strlen_recursion(s) - 1));
}
