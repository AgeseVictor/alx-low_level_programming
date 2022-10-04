#include "holberton.h"

/**
* _strspn - gets the length of a prefix
* @s:  found substring
* @accept: searched string
* Return: number of byte segments
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 1, len_subsg, i;
char *ptr = s;
char *subsg = accept;
for (len_subsg = 0; *accept++ != '\0'; len_subsg++)
;
while (*ptr != '\0')
{
for (i = 0; i < len_subsg; i++)
{
if (*ptr == subsg[i])
{
count++;
break;
}
}
ptr++;
}
return (count);
}
