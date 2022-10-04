#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: searched string
 * @c: found character
 * Return: a pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
char *ptr = s;
while (*ptr != '\0')
{
if (*ptr == c)
{
return (ptr);
}
ptr++;
}
return (NULL);
}
