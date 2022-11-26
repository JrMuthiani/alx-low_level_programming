#include "main.h"

/**
 * _strcmp - Copmares two strings
 * Description: Takes two strings and copmares them
 * @s1: String 1
 * @s2: String 2
 * Return: If s1 < s2, negative diff of unmatched characters
 *	if s1 > s2, positive diff of unmatched characters
 *	if s1 == s2, 0
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
