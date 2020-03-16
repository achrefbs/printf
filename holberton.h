#include <stdio.h>
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list argslist);
int print_string(va_list argslist);
typedef struct specifiers
{
	char dir;
	int (*f)();
}specifiers_t;