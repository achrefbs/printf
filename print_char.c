#include "holberton.h"
#include <stdarg.h>
int print_char(va_list argslist)
{
	_putchar(va_arg(argslist, int));
	return (0);
}
