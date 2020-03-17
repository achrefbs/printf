#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
int reverse(int n)
{
  int i, t = 0;
  for(i = 0; n > 0;i++)
  {t = (t * 10 )+ n%10;
  n = (n - n%10) /10;}
  return(t);
}
int print_integer(va_list argslist)
{
  int i, l, n = 0;
  n = va_arg(argslist, int);
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
  for (i = 0; n > 0; i++)
  {
    _putchar(n % 10 + '0');
    n = n /10;
    l++;
  }
  return (l);
}