#include <stdio.h>
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list argslist);
int print_string(va_list argslist);
int print_integer(va_list argslist);
int de_to_bi(va_list argslist);
typedef struct specifiers
{
	char *dir;
	int (*f)(va_list argslist);
}specifiers_t;