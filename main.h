#ifndef __main__
#define __main__


#define BUFSIZE 1024

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);


int print_char(va_list _args);
int print_str(va_list _args);
int (*printing(char c))(va_list);
int print_int(va_list _args);
int print_positive_int(int num);
int print_bin(va_list _args);
int print_ui(va_list _args);

/**
 * struct Ops - a structure with op-fn pairs
 * @spec: the specifier
 * @fn: the matching function.
 */

struct Ops
{
	char spec;
	int (*fn)(va_list _args);
};
/**
 * black_ops - type defintion for struct ops
 */
typedef struct Ops black_ops;

#endif
