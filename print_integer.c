#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
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
t = (t * 10) + n % 10;
n = (n - n % 10) / 10;
}
return (t);
}

/**
 *rev- function to reverse
 *@c: character
 *@i: integer
 */
void rev(char *c, int i)
{
int j;
char tmp;
for (j = 0; j < (i / 2); j++)
{
tmp = c[j];
c[j] = c[i - j - 1];
c[i - j - 1] = tmp;
}
}

/**
 *intlength- function that retunr length of integer
 *@n: integer
 *Return: return length l
 */
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
 *@argslist: list of arguments
 *Return: return lenght l
 */
int print_integer(va_list argslist)
{
int i, n = 0;
unsigned int long c;
char *res;
n = va_arg(argslist, int);
c = intlength(n);
res = malloc(c + 1);
if (n < 0)
{
_putchar('-');
n = n * -1;
}
if (n == 0)
{
_putchar('0');
return (0);
}
for (i = 0; i < c; i++)
{
res[i] = (n % 10 + '0');
n = n / 10;
}
rev(res, c);
for (i = 0; i < c; i++)
_putchar(res[i]);
return (c);
}
