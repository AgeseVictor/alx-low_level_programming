#include "holberton.h"
/**
* _isalpha - checks for alphabet characters
* @c: c argument has character value in ASCII
* Return: 1/0 character is alphabet/not alpha
*
*/
int _isalpha(int c)
{
if ((c >= 97 && c < 123) || (c >= 65 && c < 91))
{
return (1);
}
else
{
return (0);
}
}
