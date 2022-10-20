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
 * rec_binary_search - searches for a value by Binary search algorithm
 * and returns the index of the first value in the array
 * @array: a pointer to the first element of the array
 * @index: the low index in the array
 * @end: the high index in the array
 * @value: the value to search for
 * Return: index of the value, else -1
 */
int rec_binary_search(int *array, size_t index, size_t end, int value)
{
size_t pivot = 0;
display(array, index, end);
pivot  = (end + index) / 2;
if (value == array[pivot] && value != array[pivot - 1])
return (pivot);
else if (index == end)
return (-1);
else if (value <= array[pivot])
return (rec_binary_search(array, index, pivot, value));
else if (value > array[pivot])
return (rec_binary_search(array, pivot + 1, end, value));
return (-1);
}

/**
 * advanced_binary - searches for a value by Binary search algorithm
 * and returns the index of the first value in the array
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index of the value, else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
if (size == 0 || !array)
return (-1);
return (rec_binary_search(array, 0, size - 1, value));
}
