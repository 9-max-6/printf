#include "main.h"

int _recurse_bin(unsigned int num);
/**
 * print_bin - a function to print numbers in binary
 * @_args: the list of arguments of the variadic _printf
 * 
 * Return: returns the number of printed characters.
 */

int print_bin(va_list _args)
{
	int i = 0;
	unsigned int num;

	num = va_arg(_args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num > 1)
	{
		i = _recurse_bin(num);
	}
	return (i);
}

/**
 * _recurse_bin - a utility function to print binary
 * @num: the number
 *
 * Return: the number of characters printed.
 */

int _recurse_bin(unsigned int num)
{
	int count = 0;

	if (num > 1)
	{
		count += _recurse_bin(num / 2);
	}

	_putchar((num % 2) + '0');

	return (count + 1);
}
