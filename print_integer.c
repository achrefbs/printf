#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}

int lenint(int n)
{
  int x, l = 0;
  for (x = 0; n != 0; x++)
    {
      l++;
      n = n / 10;
    }
  if (n < 0)
    l = l + 1;
  return (l);
}

void reverse(char *s, int n)
{
  int tmp;
  int x;
  for (x = 0; x < (n / 2); x++)
    {
      tmp = s[n - 1 - x];
      s[n - 1 - x] = s[x];
      s[x] = tmp;
    }
}
void itoa(int n, char *s)
{
  int i, sign = n;
  if (sign < 0)
    n = -n;
  i = 0;
  while (n / 10)
    {
      s[i++] = n % 10 + '0';
      n = n / 10;
    }
  s[i] = n % 10 + '0';
  if (sign < 0)
    s[i++] = '-';
  s[i++] = '\0';
  reverse(s, n);
}

int print_integer(va_list argslist)
{
  int x, n = va_arg(argslist, int);
  char *p;
  p = malloc(sizeof(lenint(n) + 1));
  itoa(n, p);
  for (x = 0; p[x]; x++)
    _putchar(p[x]);
  return(0);
}
