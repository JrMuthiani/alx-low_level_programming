#include <stdio.h>

/**
 * main - Entry point
 * Description: Fibonacci numbers, sum of their even values
 * up until 4000000
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j = 1;
	int next;
	int sum = 0;

	for (next = 0; next < 4000000; next = i + j)
	{
		i = j;
		j = next;
		if (next % 2 == 0)
		{
			sum += next;
		}
	}
	printf("%i\n", sum);
	return (0);
}
