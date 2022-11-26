#include "main.h"

/**
 * *leet - Main
 * Description: Encode string int 1337
 * @str: String to be encoded
 * Return: Pointer to encoded string
 */

char *leet(char *str)
{
	int ind1 = 0;
	int ind2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[ind1])
	{
		for (ind2 = 0; ind2 <= 7; ind2)
		{
			if (str[ind1] == leet[ind2] ||
			   str[ind1] - 32 == leet[ind2])
				str[ind1] = ind2 + '0';
		}
		ind1++;
	}
	return (str);
}
