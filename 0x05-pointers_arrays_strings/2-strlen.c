#include "main.h"

/**
 * _strlen - Checks length of a string
 * Decription: Count characters in a string
 * @s: String to be checked
 * Return: Length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
