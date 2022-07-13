#include "main.h"

/**
 *  * _strlen - returns the length of a string
 *   * @s: string
 *    * Return: len
 */
int _strlen(char *s)
{
	int l0en = 0;

	while (*(s + l0en) != '\0')
		l0en++;
	return (l0en);
}
