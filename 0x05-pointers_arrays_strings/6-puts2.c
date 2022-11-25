#include "main.h"

/**
 * puts2 - Print string, every other character
 * @str: Pointer string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
