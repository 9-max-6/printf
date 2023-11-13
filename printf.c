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
	char c;
	int _chars, num_bytes;

	va_start(_args, format);

	if (format == NULL)
	{
		return (-1);
	}
	_chars = num_bytes = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				num_bytes++;
				_putchar(format[i]);
				i++;
			}
			else if (format[i + 1] == 'c' || format[i + 1] == 's'|| format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				c = format[i + 1];
				_chars = (*printing(c))(_args);
				i++;
				num_bytes += _chars;
			}
			else
			{
				_putchar('%');
				num_bytes++;
			}
		}
		else
		{
			_putchar(format[i]);
			num_bytes++;
		}
	}
	return (num_bytes);
}

