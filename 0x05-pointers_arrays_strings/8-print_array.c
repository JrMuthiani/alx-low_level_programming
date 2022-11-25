#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an array
 * @a: Array
 * @n: Number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j == (n - 1))
			printf("%d", *(a + j));
		else
			printf("%d, ", *(a + j));
	}
	printf("\n");
}
