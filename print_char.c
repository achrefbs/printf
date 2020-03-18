#include "holberton.h"
#include <stdarg.h>
/**
 *print_char- funct that print a char
 *@argslist: list of arguments
 *Return: return 1
 */
int print_char(va_list argslist)
{
char c;
c = va_arg(argslist, int);
_putchar(c);
return (1);
}
