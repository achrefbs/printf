#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *reverse- function that reverse an int
 *@n: integer
 *Return: return t;
 */
int reverse(int n)
{
int i, t = 0;
for (i = 0; n > 0; i++)
{
t = (t * 10 )+ n % 10;
n = (n - n % 10) / 10;}
return(t);
}
int intlength(int n)
{
int l = 0;
while (n != 0)
{
n /= 10;     
++l;
}
return (l);
}
/**
 *print_integer- function to print integer
 *Return: return lenght l
 */
int print_integer(va_list argslist)
{
int i, l = 0, n = 0, c;
n = va_arg(argslist, int);
c = intlength(n);
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
n = reverse(n);
for (i = 0; i < c; i++)
{
_putchar(n % 10 + '0');
n = n /10;
l++;
}
return (l);
}
