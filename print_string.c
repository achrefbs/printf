#include "holberton.h"
int print_string(va_list argslist)
{
int x, l;
char *c;
c = va_arg(argslist, char *);
for (x = 0; c[x] != '\0'; x++)
{
_putchar(c[x]);
l++;
}
return (l);
}
