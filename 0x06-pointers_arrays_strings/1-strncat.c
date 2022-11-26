#include "main.h"

/**
 * *_strncat - Concatenates two strings
 * Description: Joins two strings using at most n bytes from 'src'
 * @dest: Destination string
 * @src: String to appen to dest
 * @n: Number of bytes from 'src' to append to destination string
 * Return: Pointer to final string
 */

char *_strncat(char *dest, char *src, int n)
{
	int ind = 0;
	int dest_len = 0;

	while (dest[ind++])
		dest_len++;
	for (ind = 0; src[ind] && ind < n; ind++)
		dest[dest_len++] = src[ind];
	return (dest);
}
