#include "holberton.h"
/**
* _abs - computes absolute value of an integer
* @num: num argument has value of number
* Return: Absloute value of number
*
*/
int _abs(int num)
{
if (num < 0)
{
return (-1 * num);
}
else
{
return (num);
}
}
