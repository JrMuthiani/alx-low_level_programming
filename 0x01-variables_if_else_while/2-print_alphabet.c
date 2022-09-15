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

	for (c = "A"; c <= "Z"; c++)
	{
		putchar(tolower(c));
	}
	return (0)
}
