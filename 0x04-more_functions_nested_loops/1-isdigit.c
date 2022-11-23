#include "main.h"

/**
 * _isdigit - Check for digit in characters
 * @c: Character to be checked
 * Return: 1 if true, else 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
