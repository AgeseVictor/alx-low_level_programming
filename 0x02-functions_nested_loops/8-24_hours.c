#include "main.h"
/**
 *  * jack_bauer - print every minute of the day
 *   *
 *    *
 *     *
 *      * Return: every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int H, h, M, m;

	for (H = 0; H <= 2; H++)
	{
		for (h = 0; h <= 9; h++)
		{
			for (M = 0; M < 6; M++)
			{
				for (m = 0; m <= 9; m++)
				{
					if (!((H == 2) && (h > 3)))
					{
						_putchar('0' + H);
						_putchar('0' + h);
						_putchar(':');
						_putchar('0' + M);
						_putchar('0' + m);
						_putchar('\n');
					}
				}
			}
		}
	}
}
