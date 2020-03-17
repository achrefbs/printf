#include <stdio.h>
#include <math.h>
#include <stdarg.h>
#include "holberton.h"
int reverses(int n)
{
int i, t = 0;
for(i = 0; n > 0;i++)
{
t = (t * 10 )+ n%10;
n = (n - n%10) /10;}
return(t);
}
int print_number(int n)
{
int i, l;
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n == 0)
{
_putchar('0');
return (0);
}
n = reverses(n);
for (i = 0; n > 0; i++)
{
_putchar(n % 10 + '0');
n = n /10;
l++;
}
return (l);
}
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
print_number(b);
return (0);
}
