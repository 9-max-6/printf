#include "main.h"

/**
 * _putchar - a function to print a character to std output
 * @c: the character
 * Return: success ? 1 : 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
