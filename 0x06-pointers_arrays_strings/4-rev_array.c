#include "main.h"

/**
 * reverse_array - Reverse integer array
 * Description: Reverse contents in an array
 * @a: Target array
 * @n: Number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int ind;

	for (ind = n - 1; ind >= n / 2; ind)
	{
		tmp = a[n - 1 - ind];
		a[n - 1 - ind] = a[ind];
		a[ind] = tmp;
	}
}
