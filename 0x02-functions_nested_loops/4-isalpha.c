#include "main.h"

/**
 * _isalpha: Entry point
 * @c: receive integer value
 * Description: check if alphabet
 * Return: 1 if uppercase or lower, 0 if false
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
