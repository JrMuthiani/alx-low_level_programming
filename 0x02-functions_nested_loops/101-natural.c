#include <stdio.h>

/**
 * main - Entry point
 * Description: print sum of multiples of 3 and 5 until 1024
 * Return: sum
 */

int main(void)
{
	int n;
	int j = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			j = j + n;
		}
	}
	printf("%d\n", j);
	return (0);
}
