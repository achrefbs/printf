#include <stdio.h>
#include <math.h>
#include <stdarg.h>
#include "holberton.h"
int de_to_bi(va_list argslist)
{
int d = va_arg(argslist, unsigned int);
int b = 0;
int r, tmp = 1;
while (d != 0)
{
r = d % 2;
d = d / 2;
b = b + r * tmp;
tmp = tmp * 10;
}
print_integer(b);
return (0);
}
