#include "main.h"
/**
 * print_int - prints an integer
 * @_args: list of variadic fxn arguments
 *
 * Return: number of printed digit
 */
int print_int(va_list _args)
{
	int num;
	int k = 0;
	num = va_arg(_args, int);

	if (num < 0)
	{
		_putchar('-');
		k++;
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		k++;
		return (k);
	}
	k += print_positive_int(num);
	return (k);
}
/**
 * print_positive_int - prints positive integers
 * @num: integer
 *
 * Return: positive integers
 */
int print_positive_int(int num)
{
	int count = 0;
	if (num / 10 != 0)
	{
		count += print_positive_int(num / 10);
	}
	_putchar(num % 10 + '0');
	return (count + 1);
}
/**
i * print_char - prints a character
 * @_args: list of variadic functions
 *
 * Return: characters printed
 */
int print_char(va_list _args)
{
	char ch;

	ch = va_arg(_args, int);
	write(1, &ch, 1);
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
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
	}

	return (i);
}






