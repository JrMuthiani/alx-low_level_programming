#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Description: Print the alphabet 10 times
 * return: void
 */

void print_alphabet_x10(void)
{
	int j;
	int c;

	for (j = 0; j <= 9; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar(j);
	}
}
