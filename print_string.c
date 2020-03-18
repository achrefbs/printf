#include "holberton.h"
#include <stdarg.h>
/**
 *print_string- func that print a string
 *@argslist: list of arguments
 *Return: return 1
 *
 */
int print_string(va_list argslist)
{
int x, l = 0;
char *c;
c = va_arg(argslist, char *);
if (c == NULL)
c = "(null)";
for (x = 0; c[x] != '\0'; x++)
{
_putchar(c[x]);
l++;
}
return (l);
}
