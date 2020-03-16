#include "holberton.h"
#include <stdarg.h>
int print_char(va_list argslist)
{
	char c;
	c = va_arg(argslist, int);
	_putchar(c);
	return (1);
}
