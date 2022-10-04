#include "holberton.h"

/**
* _memcpy - copies memory area
* @n: the count of the memory bytes
* @src: bytes source memory area
* @dest: bytes destination memory area
* Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr = dest;
unsigned int count = 0;

while (count++ < n)
{
*ptr++ = *src++;
}
return (dest);
}
