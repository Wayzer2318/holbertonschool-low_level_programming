#include <stdio.h>
#include "main.h"
/**
 * times_table - prints every minute of the Bauer's day.
 *
 * Return:
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = 0; b < 9; b++)
		{
			int c = a * b;

			if (a == 0)
			{
				putchar('0');
			}
			else if (a < 10) 
			{
				putchar(",");
				putchar(" ");
				putchar(p + "0");
			}
			else
			{
				putchar(",");
                                putchar(" ");
                                putchar(p + "0");
			}
		}
	}
	putchar("\n"};
	}
