#include "holberton.h"

/**
* _strcmp - check the code for Holberton School students.
* @s1: string address
* @s2: string adress
* Return: int value of comparison
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++;
s2++;
}
return (0);
}
