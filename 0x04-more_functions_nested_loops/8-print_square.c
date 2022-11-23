#include "main.h"

/**
 * print_square - Print digit #
 * Desrciption: Print square with digit #
 * @size: Number of times digit # will be printed
 * Return: Square
 */

void print_square(size)
{
	int a = 0;
	int b;

	while (a < size && size > 0)
	{
		b = 0;
		while (b < size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
	if (a <= 0)
		_putchar('\n');
}
