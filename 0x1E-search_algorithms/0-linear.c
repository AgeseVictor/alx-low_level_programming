#include "search_algos.h"

/**
 * linear_search - searches for a value by Linear search algorithm
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index of the value, else -1
 */

int linear_search(int *array, size_t size, int value)
{
size_t count = 0;
while (count < size)
{
printf("Value checked array[%ld] = [%d]\n", count, array[count]);
if (value == array[count])
return (count);
count++;
}
return (-1);
}
