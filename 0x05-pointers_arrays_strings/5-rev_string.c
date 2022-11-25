#include "main.h"

/**
 * rev_string - Print string in reverse
 * @s: Pointer to character
 * Return: void
 */

void rev_string(char *s)
{
	int len, a;
	char x;

	len = 0;
	while (*(s + len) != '0')
		len++;
	len--;
	for (a = 0; a < len; a++)
	{
		x = *(s + len);
		*(s + len) = *(s + a);
		*(s + a) = x;
		len--;
	}
}
