#include <stdio.h>

/**
 * main - Entry point
 * Description: Print alphabet lowercase in reverse
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
