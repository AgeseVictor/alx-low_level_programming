#include "holberton.h"
#include <stdio.h>

/**
* _strcpy - copies the string pointed to by src
* @dest: copies the address to the dest string
* @src: copies the address to the src string 
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
char *copy = dest;
while(*src)
{
*dest = *src;
src++;
dest++;
}
*dest =  '\0';
return (copy);
}
