#include <unistd.h>

/**
 * main - print to stdout
 * Description:@j character to print
 * Return: 0
 */

int _putchar(char j)
{
	return (write(1, &j, 1));
}
