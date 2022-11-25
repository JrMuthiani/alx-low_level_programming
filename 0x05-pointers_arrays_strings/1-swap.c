#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: Integer a
 * @b: Integer b
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
