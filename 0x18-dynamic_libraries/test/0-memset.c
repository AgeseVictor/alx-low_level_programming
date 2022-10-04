#include "holberton.h"

/**
* _memset - fills memory with a constant byte
* @s: pointer to the memory area
* @b: constant type
* @n: bytes of the memory area
* Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
unsigned int count = 0;
while (count++ < n)
{
*ptr++ = b;
}
return (s);
}
