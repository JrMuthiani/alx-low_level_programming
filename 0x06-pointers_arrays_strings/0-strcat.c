#include "main.h"

/**
 * *_strcat - Joins 'src' and 'dest'
 * Description: Concatenates two strings
 * @src: String 1
 * @dest: String 2
 * Return: Pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	int ind = 0;
	int dest_len = 0;

	while (dest[ind++])
		dest_len++;
	for (ind = 0; src[ind]; ind++)
		dest[dest_len++] = src[ind];
	return (dest);
}
