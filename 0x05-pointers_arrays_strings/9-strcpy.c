#include "main.h"

/**
 * *_strcpy - Copy string pointed by 'src'
 * Description: Copy string pointed by 'src' to buffer
 *		pointed by 'dest'
 * @dest: character string
 * @src: Character string
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');

	return (dest);
}

