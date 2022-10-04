#include "holberton.h"
#include <stddef.h>

/**
* _strstr - locates a substring
* @haystack: searched string
* @needle: match substring
* Return: a pointer to the substring
*/
char *_strstr(char *haystack, char *needle)
{
int count, len_subsg, check;
char *ptr = haystack, *subsg = needle;

for (len_subsg = 0; *subsg++ != '\0'; len_subsg++)
;
while (*ptr != '\0')
{
check = 0;
for (count = 0; count < len_subsg; count++)
{
if (ptr[count] == needle[count])
{
check += 1;
}
}
if (check == len_subsg)
{
return (ptr);
}
ptr++;
}
return (NULL);
}
