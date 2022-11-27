#include "main.h"

/**
 * *rot13 - Main
 * Desription: Encode string using rot13
 * @str: String to be encoded
 * Return: Pointer to encoded string
 */

char *rot13(char *str)
{
	int ind1, ind2;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabdcefghijklm";

	ind1 = 0;
	while (str[i] != '\0')
	{
		ind2 = 0;
		while (alph[ind2] != '\0')
		{
			if (str[ind1] == alph[ind2])
			{
				str[ind1] = rot13key[ind2];
				break;
			}
			ind2++;
		}
		ind1++;
	}
	return (str);
}
