#include <stdio.h>

/**
 * main - FizzBuzz in numbers
 * Description: Print Fizz for numbers divisible by 3,
 *			Buzz for thode divisible by 5
 *			and FizzBuzz for those divisible by 3 and 5
 * Return: void
 */

int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("&d", a);
		a++;

		printf(" ");

	}
	printf("\n");
	return (0);
}
