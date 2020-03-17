#include "holberton.h"
int lenint(int n)
{
int x, l = 0;
for (x = 0; n != 0; x++)
{
l++;
n = n / 10;
}
return (l);
}

#include "holberton.h"
void reverse(int *c, int n)
{
int tmp;
int x;
for (x = 0; x < (n / 2); x++)
{
tmp = c[n - 1 - x];
c[n - 1 - x] = c[x];
c[x] = tmp;
}
}

#include "holberton.h"
void itoa(int n, char s[])
{
int i, sign = n;
if (sign < 0)
n = -n;
i = 0;
do
{
s[i++] = n % 10 + '0';
}
while ((n = n / 10) > 0);
if (sign < 0)
s[i++] = '-';
s[i] = '\0';
reverse(s);
}

#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
int print_integer(char *p, va_list argslist)
{
int x, n = va_arg(argslist, int);
char *c;
c = itoa(n);
for (x = 0; c[x]; x++)
{
p = c[x];
s++;
}
return(0);
}
