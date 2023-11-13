#include "main.h"
/**
 * print_char - prints a character
 * @_args: list of variadic functions
 *
 * Return: characters printed
 */
int print_char(va_list _args)
{
	char ch;

	ch = va_arg(_args, int);
	_putchar(ch);
	return (1);
}

/**
 * print_str - a function to print a string
 * @_args: list of variadic function arguments.
 *
 * Return: the number of chars printed.
 */

int print_str(va_list _args)
{
	int i;
	char *str;

	str = va_arg(_args, char *);
	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}






