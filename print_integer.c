#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
int print_integer(va_list argslist)
{
	int l;
	if(va_arg(argslist, int )!= 0)
	{
		print_integer(va_arg(argslist, int) / 10);
		_putchar((va_arg(argslist, int))%10 + '0');
	}
	return (l);
}