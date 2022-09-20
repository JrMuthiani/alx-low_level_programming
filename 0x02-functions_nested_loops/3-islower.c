#include "main.h"

/**
 * _islower - entry point
 * Description: checks if character is lower case
 * @c: the integer value received
 * Return: 1 if true, 0 otherwise
 */

int _islower(int c)
{
	int j = 'a';

	for (j = 'a'; j <= 'z'; j++)
	{
		if (c == j)
		{
			return (1);
		}
		return (0);
	}
}
