#include "main.h"

/**
 * times_table - Entry point
 * Description: Prints 9 times table
 * Return: void
 */

void times_table(void)
{
	int n, j;

	for (n = 0; n <= 9; n++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(n * j);
			_putchar(',');
		}
		_putchar('\n');
	}
}
