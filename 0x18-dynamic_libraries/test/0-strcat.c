#include "holberton.h"

/**
* _strcat - concatenates two strings
*
* Return: returns char array or a string
* @dest: char array appended string
* @src: char array pointer
*/

char *_strcat(char *dest, char *src)
{
char *ptr = dest;

while (*ptr)
{
ptr++;
}
while (*src)
{
*ptr = *src;
ptr++;
src++;
}
*ptr = '\0';

return (dest);
}
