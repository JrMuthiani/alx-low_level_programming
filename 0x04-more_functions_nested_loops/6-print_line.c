#include "main.h"

/**
 * print_line - Print a line
 * Description: Line ends at n.
 * @n: number to print
 * Return: 0
 */

void print_line(int n)
{
	int x = 0;

	while (x < n && n > 0)
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
