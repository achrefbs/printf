#include "holberton.h"
int print_numbers(va_list argsn)
{
int *n;
n = va_arg(argsn, int *)
if (n / 10 != 0)
    {
      print_number(n / 10);
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
}
