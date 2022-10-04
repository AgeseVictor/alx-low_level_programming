#include "holberton.h"
/**
* _islower - checks for lowercase characters
* @c: c argument has character value in ASCII
* Return: 1/0 character is lowercase/uppercase
*
*/
int _islower(int c)
{
if (c >= 97 && c < 123)
{
return (1);
}
else
{
return (0);
}
}
