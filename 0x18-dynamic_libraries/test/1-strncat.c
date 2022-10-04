#include "holberton.h"

/**
* _strncat - concatenates two strings
* @dest: char array appended string
* @src: char array pointer
* @n: length of char to be appended
* Return: returns char array or a string
*/

char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
int count = 1;

while (*ptr)
{
ptr++;
}
while (*src && count <= n)
{
*ptr = *src;
ptr++;
src++;
count++;
}
*ptr = '\0';

return (dest);
}
