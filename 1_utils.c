#include "main.h"
char HEX_INT[] = "0123456789ABCDEF";

/**
 * print_Hex - a function that prints ui in hexadecimal format
 *
 * @_args: list of arguments
 *
 * Return: number of characters printed
 */
int print_Hex(va_list _args)
{
	unsigned int num;

	num = va_arg(_args, unsigned int);

	if (num == 0)
	{
		_putchar( '0');
		return (1);
	}
	return (print_Hex_ui(num));
}
/**
 * print_hex_ui - prints ui in hexadecimal format
 *
 * *_args: list of arguments
 *
 * Return: number of characters printed
 */
int print_Hex_ui(unsigned int num)
{
	int count = 0;

	if (num / 16 != 0)
	{
		count += print_Hex_ui(num / 16);
	}
	_putchar(HEX_INT[num % 16]);
	return (count + 1);
}
