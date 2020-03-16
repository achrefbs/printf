#include "holberton.h"
int print_int(va list argls)
{
int i;
char x;
x = va_arg(argls, char *);
 for (i = 0; x[i] != '\0'; i++)
{
if (x[i] >= '0' && x[i] <= '9')
_putchar(x[i]);
}
return (0);
}
