#include "main.h"
int __hex_print(int num);
/**
 * __non_print - a function to print a string with spec
 * chars converted to ascii
 * @_args: list of type va_list
 * @c: the special character.
 * Return: the number of printed characters.
 */

int __non_print(char c, va_list _args)
{
	char *ptr;
	int i, num_bytes;

	ptr = va_arg(_args, char *);
	num_bytes = 0;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] == c)
		{
			write(1, "\\", 1);
			write(1, "x", 1);
			num_bytes++;;
			if (ptr[i] < 16)
			{
				write(1, "0", 1);
				num_bytes++;;
			}
			num_bytes += __non_hex(c);
			i++;
		}
		_putchar(ptr[i]);
		num_bytes++;
	}

	return (num_bytes);
}

/**
 * __non_hex - a function to print the hexadecimal value
 * of a character.
 * @c: the character.
 *
 * Return: the number of characters printed.
 */
int __non_hex(char c)
{
	int num, k;

	k = 0;
	num = c;
	k += __hex_print(num);

	return (k);
}

/**
 * __hex_print - a recursive function to print in hex
 * @num: integer value to print.
 *
 * Return: the numbers of character printed.
 */

int __hex_print(int num)
{
	int count = 0;

	if (num / 16 != 0)
	{
		count += __hex_print(num / 16);
	}
	_putchar(HEX_INT[num % 16]);

	return (count + 1);
}


