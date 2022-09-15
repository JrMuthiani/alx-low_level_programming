#include <stdio.h>

/**
 * main - Entry point
 * Description: Print combination of small three digit
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i < j && J < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
