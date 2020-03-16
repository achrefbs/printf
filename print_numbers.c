#include "holberton.h"
#include <stdarg.h>
int print_numbers(va_list argslist)
{
int n;
n = va_arg(argslist, int);
if (n / 10 != 0)
    {
      _putchar(n / 10);
      if (n > 0)
	{
	  _putchar(n % 10 + '0');
	}
      else
	{
	  _putchar(-n % 10 + '0');
	}
    }
  else if (n == 0)
    {
      _putchar('0');
    }
  else if ((n / 10 == 0) && (n % 10 != 0) && (n <= 0))
    {
      _putchar('-');
      _putchar(-n % 10 + '0');
    }
  else if ((n / 10 == 0) && (n % 10 != 0) && (n > 0))
    {
      _putchar((n % 10) + '0');
    }
	return (0);
}
