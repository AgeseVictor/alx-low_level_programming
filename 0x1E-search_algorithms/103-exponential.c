#include "search_algos.h"

/**
 * exponential_search - searches for a value by Exponential search algorithm
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index of the value, else -1
 */

int exponential_search(int *array, size_t size, int value)
{
size_t c = 0, end = 0, index = 0, pivot = 0;
size_t exp = 1;
if (size == 0 || !array)
return (-1);
while (array[exp] < value && exp < size)
{
printf("Value checked array[%ld] = [%d]\n", exp, array[exp]);
exp *= 2;
}
index = exp / 2;
if (exp >= size)
end = size - 1;
else
end = exp;
printf("Value found between indexes [%lu] and [%lu]\n", index, end);
while (end >= index)
{
printf("Searching in array: ");
for (c = index; c <= end; c++)
{
if (c != index)
printf(", ");
printf("%d", array[c]);
}
printf("\n");
pivot = (end + index) / 2;
if (value == array[pivot])
return (pivot);
else if (value < array[pivot])
end = pivot - 1;
else
index = pivot + 1;
}
return (-1);
}
