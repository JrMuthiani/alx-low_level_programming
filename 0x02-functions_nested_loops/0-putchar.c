#include "main.h"

/**
 * main - Entry point
 * Description: Prints _putchar
 * Returns: 0 always
 */

int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, so;

	so = sizeof(str) / sizeof(int);
	for (count = 0; count < so; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
