#include <stdio.h>

/**
 * * main - prints the sum of all the multiples of 3 or 5 below 1024
 * * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum_3, sum_5, totalsum;
	int n;

	sum_3 = 0;
	sum_5 = 0;
	totalsum = 0;

	for (n = 0; n < 1024; ++n)
	{
		if ((n % 3) == 0)
		{
			sum_3 = sum_3 + n;
		} else if ((n % 5) == 0)
		{
			sum_5 = sum_5 + n;
		}
	}
	totalsum = sum_3 + sum_5;
	printf("%lu\n", totalsum);
	return (0);
}
