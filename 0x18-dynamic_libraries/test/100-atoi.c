#include "holberton.h"
#include <stdio.h>

/**
* _atoi - converts a string to an integer
*
* Return: type int
*/
int _atoi(char *s)
{
int count;
int numb, sign;
numb = 0;
sign = -1;

for (count = 0; s[count] != '\0' ; count++)
{
if (s[count] == '-')
{
sign *= -1;
}
if (s[count] > 47 && s[count] < 58)
{
if(numb < 0)
{
numb = (numb * 10) - (s[count] - '0');
}
else
{
numb = (s[count] - '0') * -1;
}
if (s[count + 1] < 48 || s[count + 1] > 57)
{
break;
}
}
}
if (sign < 0)
{
numb *= -1;
}
return (numb);
}
