#include "search_algos.h"

/**
 * interpolation_search - searches for a value by ...
 * ... Interpolation search algorithm
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index of the value, else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
size_t low = 0, high = size - 1, mid;
if (size == 0 || !array)
return (-1);
mid = low + ((value - array[low]) * (high - low) / (array[high] - array[low]));
if (mid > size - 1)
printf("Value checked array[%ld] is out of range\n", mid);
while ((array[high] != array[low]) && (value >= array[low])
&& (value <= array[high]))
{
mid = low + ((value - array[low]) * (high - low) / (array[high] - array[low]));
printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
if (array[mid] < value)
low = mid + 1;
else if (value < array[mid])
high = mid - 1;
else
return (mid);
}
if (value == array[low])
return (low);
else
return (-1);
}
