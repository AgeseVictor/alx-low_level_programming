#include "holberton.h"

/**
* _strncpy - copies a string.
* @dest: copied string address
* @src: to be copied string address
* @n: length of chars copied
* Return: copied string address
*/

char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;
int count = 1;

while (*src && count <= n)
{
*ptr = *src;
ptr++;
src++;
count++;
if (*src == '\n')
{
*ptr++ = '\n';
while (count++ < 90)
{
*ptr++ = '\0';

}
break;
}
if (*src == '\0')
*ptr = *src;
}

return (dest);
}
