#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: char to be printed
 * Return: 1 to success
 */
int _putchar(char)
{
	return(write(1, &c, 1));
}

