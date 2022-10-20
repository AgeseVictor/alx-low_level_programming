#include "search_algos.h"

/**
 * jump_search - searches for a value by Jump search algorithm
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index of the value, else -1
 */

int jump_search(int *array, size_t size, int value)
{
size_t c = 0, start = 0, end = 0, block = 0;
if (size == 0 || !array)
return (-1);
block = sqrt(size);
printf("Value checked array[%lu] = [%d]\n", start, array[start]);
while (array[end] < value)
{
start = end;
end = end + block;
if (start != 0)
printf("Value checked array[%lu] = [%d]\n", start, array[start]);
if (end >= size)
break;
}
printf("Value found between indexes [%lu] and [%lu]\n", start, end);
if (end >= size)
end = size - 1;
for (c = start; c <= end; c++)
{
printf("Value checked array[%lu] = [%d]\n", c, array[c]);
if (value == array[c])
return (c);
}
return (-1);
}
