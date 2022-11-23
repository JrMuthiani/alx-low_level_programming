#include "main.h"

/**
 * print_numbers - prints 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	char y = 0;

	while (y <= 9)
	{
		_putchar(y + '0');
		y++;
	}
	_putchar('\n');
}
