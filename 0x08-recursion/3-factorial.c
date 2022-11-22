#include "main.h"

/**
 * factorial - Return factorial of a given number.
 * @n: The inputed number.
 * Return: If n < 0, 1 to indicate error
 * If n > 0, the factorial of n
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
