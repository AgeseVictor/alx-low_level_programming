#include "holberton.h"

/**
* _strlen - counts string length
* @s: copies address to the character
* return: string length
*/
int _strlen(char *s)
{
int len;
len = 0;

while (*s++)
{
len++;
}
return (len);
}
