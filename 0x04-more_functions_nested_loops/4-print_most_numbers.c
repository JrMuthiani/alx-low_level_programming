#include "main.h"

/**
 * print_most_numbers - prints 0 to 9, omitting 2 and 4
 * Description: Print numbers
 * Return: void
 */

void print_most_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
		x++;
	}
	_putchar('\n');
}
