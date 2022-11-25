#include "main.h"

/**
 * _puts - Inserts characters to form a string
 * Description: Print a string
 * @str: Pointer to a string
 * Return: void
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
