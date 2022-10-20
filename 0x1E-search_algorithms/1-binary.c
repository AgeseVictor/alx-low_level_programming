#include "search_algos.h"


/**
 * display - prints an array to the console
 * @array: a pointer to the first element of the array
 * @low: low index of array
 * @high: high index of array
 */

void display(int *array, size_t low, size_t high)
{
size_t c;
printf("Searching in array: ");
for (c = low; c < high; c++)
printf("%d, ", array[c]);
printf("%d\n", array[c]);
}

/**
 * binary_search - searches for a value by Binary search algorithm
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index of the value, else -1
 */

int binary_search(int *array, size_t size, int value)
{
size_t pivot = 0, index = 0, high = 0;
if (size == 0 || !array)
return (-1);
high = size - 1;
while (high >= index)
{
display(array, index, high);
pivot = (high + index) / 2;
if (value == array[pivot])
return (pivot);
else if (value < array[pivot])
high = pivot - 1;
else
index = pivot + 1;
}
return (-1);
}
