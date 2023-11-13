#ifndef __main__
#define __main__


#define BUFSIZE 1024

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);


int print_char(va_list _args, const char *ft);
int print_str(va_list _args, const char *ft);

#endif
