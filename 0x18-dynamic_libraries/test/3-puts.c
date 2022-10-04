#include "holberton.h"

/**
* _puts - puts a string on console
* @str: copies address to the string
*/
void _puts(char *str)
{
while(*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
