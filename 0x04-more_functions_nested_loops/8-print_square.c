#include "main.h"

/**
 * print_square - Print digit #
 * Desrciption: Print square with digit #
 * @size: Number of times digit # will be printed
 * Return: Square
 */

void print_square(size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
