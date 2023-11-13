#include "main.h"
/**
 * print_char - prints a character
 * @_args: list of variadic functions
 * @ft:the format string
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
 * @ft: the format string
 *
 * Return: the number of chars printed.
 */

int print_str(va_list _args)
{
	int i;
	char *str;

	str = va_arg(_args, char *);
	
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}






