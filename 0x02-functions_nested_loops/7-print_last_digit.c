#include "main.h"

/**
 * print_last_digit - Entry point
 * @j: Takes an integer value
 * Description: Prints last digit of an integer
 * Return: integer
 */

int print_last_digit(int j)
{
	int lastint = j % 10;

	if (j < 0)
	{
		lastint = lastint * -1;
	}
	_putchar(lastint + '0');
	return (lastint);
}
