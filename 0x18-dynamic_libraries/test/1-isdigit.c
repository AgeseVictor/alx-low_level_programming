#include "holberton.h"
/**
* _isdigit - checks for digits
* @c: c argument has character value in ASCII
* Return: 1/0 value is digit/otherwise
*
*/
int _isdigit(int c)
{
if (c >= 48 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
