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
