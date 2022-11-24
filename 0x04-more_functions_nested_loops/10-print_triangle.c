#include "main.h"

/**
 * print_triangle - Check for digit
 * Description: Print triangle using #
 * @size: Integer type
 * Return: void
 */

void print_triangle(int size)
{
	int a = 1;
	int b;

	while (a <= size && size > 0)
	{
		b = 0;
		while (b < size - a)
		{
			_putchar(' ');
			b++;
		}
		b = 0;
		while (b < a)
		{
			_putchar('#');
			b++;
		}

		_putchar('\n');
		a++;
	}
	if (a == 1)
		_putchar('\n');
}
