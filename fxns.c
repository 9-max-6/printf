#include "main.h"
/**
 * print_char - prints a character
 * @_args: list of variadic functions
 * @ft:the format string
 *
 * Return: characters printed
 */
int print_char(va_list _args, const char *ft)
{
	char ch;

	va_start(_args, ft);

	ch = va_arg(_args, char);
	_putchar(ch);
	return (1);
}
