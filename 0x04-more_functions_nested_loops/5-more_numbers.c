#include "main.h"

/**
 * more_numbers - print 0 to 14
 * Description: Prints 10 times on new lines
 * Return: void
 */

void more_numbers(void)
{
	char a, b;
	int y = 0;

	while (y < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			b = a;
			if (a > 9)
			{
				_putchar('1');
				b = a % 10;
			}
			_putchar('0' + b);
		}
		_putchar('\n');
		y++;
	}
}
