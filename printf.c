#include "main.h"

/**
 * _printf - a variadic function that prints a formatted
 * string to output
 * @format: this is the format string
 *
 * Return: success ? number of chars printed : error
 */

int _printf(const char *format, ...)
{
	int i;
	va_list _args;
	int _chars;

	if (format == NULL)
	{
		return (-1);
	}
	_chars = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar(format[i]);
				i++;
			}
			else
			{
				if (format[i + 1] == 'c')
					_chars = print_char(_args, format);
				if (format[i + 1] == 's')
					_chars = print_str(_args, format);
			}
		}
		else
		{
			_putchar(format[i]);
		}
	}

	return (i);
}


