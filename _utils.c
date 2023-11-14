#include "main.h"

/**
 * print_positive_ui - a function to print unsigned integer
 * @num: unsigned integer
 *
 * Return: returns the number of characters printed.
 */
int print_positive_ui(unsigned int num)
{
	int count = 0;

	if (num / 10 != 0)
	{
		count += print_positive_ui(num / 10);
	}
	_putchar(num % 10 + '0');
	return (count + 1);
}
/**
 * print_octal - a function that prints ui in octal format
 * @_args: list of arguments
 *
 * Return: number of characters printed
 */
int print_octal(va_list _args)
{
	unsigned int num;
	
	num = va_arg(_args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	return (print_octal_ui(num));
}
/**
 * print_octal_ui - a function to print ui
 * @num: unsigned integer
 *
 * Return: number of characters printed
 *
 */
int print_octal_ui(unsigned int num)
{
	int count = 0;

	if (num / 8 != 0)
	{
		count += print_octal_ui(num / 8);
	}
	 _putchar((num % 8) + '0');
	return (count + 1);
}
/**
 * print_hex - a function that prints ui in hexadecimal format
 *
 * @_args: list of arguments
 *
 * Return: number of characters printed
 */
int print_hex(va_list _args)
{
	unsigned int num;

	num = va_arg(_args, unsigned int);

	if (num == 0)
	{
		_putchar( '0');
		return (1);
	}
	return (print_hex_ui(num));
}
/**
 * print_hex_ui - prints ui in hexadecimal format
 *
 * *_args: list of arguments
 *
 * Return: number of characters printed
 */
int print_hex_ui(unsigned int num)
{
	int count = 0;

	if (num / 16 != 0)
	{
		count += print_hex_ui(num / 16);
	}
	_putchar(hex_int[num % 16]);
	return (count + 1);
}
