#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: Prints alphabets in lowercase
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar("\n");
	return (0);
}
