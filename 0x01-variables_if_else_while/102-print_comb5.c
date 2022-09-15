#include <stdio.h>

/**
 * main - Entry point
 * Descritpion: all possible comb of two two digit numbers
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if (((k + j) < (i + j) && k >= i) || i <= k)
					{
						putchar(i);
						putchar(k);
						putchar(' ');
						putchar(j);
						putchar(k);
						if (i + j + k + l == 227 && i = '9')
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
