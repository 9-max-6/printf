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
	va_list _args;
	char c;
	int _chars, num_bytes, i;

	va_start(_args, format);
	if (format == NULL)
		return (-1);
	_chars = num_bytes = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				num_bytes++;
				write(1, &format[i], 1);
				i++;
			}
			else if (format[i + 1] == 'c' || format[i + 1] == 's'
					|| format[i + 1] == 'd' || format[i + 1] == 'i' || format[i + 1] == 'b' || format[i + 1] == 'u' || format[i + 1] == 'o')
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
			write(1, &format[i], 1);
			num_bytes++;
		}
	}
	va_end(_args);
	return (num_bytes);
}
