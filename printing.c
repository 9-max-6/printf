#include "main.h"
#include <string.h>

/**
 * printing - a function to call the right fn for a spec
 * @c: conversion specifier.
 *
 * Return: the number of characters printed.
 */

int (*printing(char c))(va_list)
{
	black_ops op[] = {
		{'s', print_str},
		{'c', print_char},
		{'i', print_int},
		{'d', print_int},
		{'b', print_bin},
		{'\0', NULL}
	};
	int i;

	for (i = 0; op[i].fn != NULL; i++)
	{
		if (c == op[i].spec)
			return (op[i].fn);
	}
	return (NULL);
}
