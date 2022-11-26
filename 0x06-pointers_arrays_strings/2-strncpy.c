#include "main.h"

/**
 * *_strncpy - Copy string
 * Description: Copy 'src' string int 'dest' string
 * @dest: The buffer having the string copy
 * @src: The source string
 * @n: Bytes to be copied from 'src'
 * Return: Pointer to result string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int ind = 0;
	int src_len = 0;

	while (src[ind++])
		src_len++;

	for (ind = 0; src[ind] && ind < n; ind++)
		dest[ind] = src[ind];
	for (ind = src_len; ind < n; ind++)
		dest[ind] = '\0';

	return (dest);
}
