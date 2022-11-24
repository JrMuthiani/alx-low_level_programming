#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int y;

	y = n;
	if (n < 0)
	{
		_putchar(45);
		y = -n;
	}
	if (y / 10)
		print_number(y / 10);
	_putchar((x % 10) + '0');
}
