#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: print alphabet
 * in lowercase then new line
 * return: void
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
