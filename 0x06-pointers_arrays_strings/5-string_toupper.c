#include "main.h"

/**
 * *string_toupper - Main
 * Description: Change lowercase characters to uppercase
 * @str: String to be iterated
 * Return: Pointer to new string
 */

char *string_toupper(char *str)
{
	int ind = 0;

	while (str[ind])
	{
		if (str[ind] >= 'a' && str[ind] <= 'z')
			str[ind] -= 32;
		ind++;
	}
	return (str);
}
