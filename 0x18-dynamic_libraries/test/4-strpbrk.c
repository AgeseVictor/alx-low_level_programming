#include "holberton.h"
#include <stddef.h>

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: searched string
* @accept: matched substring
* Return: a pointer to the byte in s that matches
*/

char *_strpbrk(char *s, char *accept)
{
int count, len_subsg;
char *ptr = s, *subsg = accept;

for (len_subsg = 0; *accept++ != '\0'; len_subsg++)
;
while (*ptr != '\0')
{
for (count = 0; count < len_subsg; count++)
{
if (*ptr == subsg[count])
{
return (ptr);
}
}
ptr++;
}
return (NULL);
}
