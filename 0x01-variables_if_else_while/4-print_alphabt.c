#include <stdio>

/**
 * main - Entry point
 * Description: Print alphabet and skip e and q
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' && c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
