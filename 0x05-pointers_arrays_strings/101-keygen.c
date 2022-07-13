#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - generate password
 *   *
 *    * Return: Always 0
 */
int main(void)
{
	int r = 0;
	int s = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (s < 2772)
	{
		r = rand() % 128;
		if ((s + r) > 2772)
			break;
		s = s + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - s));
	return (0);
}
