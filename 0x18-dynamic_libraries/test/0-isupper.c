#include "holberton.h"
/**
* _isupper - checks for uppercase characters
* @c: c argument has character value in ASCII
* Return: 1/0 character is uppercase/otherwise
*
*/
int _isupper(int c)
{
if (c >= 65 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
