#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - Return length of string.
 * @s: The string to be measured
 * Return: The length of the string
 */

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}

/**
 * check_palindrome - Check if string is a palindrome
 * @s: The string to be checked.
 * @len: The length of s.
 * @index: The index of string to be checked
 * Return: If string is a palindrome - 1
 * If string is not a palindrome - 0
 */

int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));
	return (0);
}

/**
 * is_palindrome - Checks if string is a palindrome.
 * @s: The string to be checked.
 * Return: If the string is a palindrome - 1
 * If not a palindrome - 0
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
