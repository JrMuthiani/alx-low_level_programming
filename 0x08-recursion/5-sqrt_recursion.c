#include "main.h"

/**
 * sqrt_a - main, Main function
 * @x: int
 * @y: int
 * Return: 0
 */

int sqrt_a(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (sqrt_a(x, y + 1));
}

/**
 * _sqrt_recursion - main - Checks code
 * @n: number
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
