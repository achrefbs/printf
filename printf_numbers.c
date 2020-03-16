#include "holberton.h"
int print_numbers(va_list argsn)
{
if (argsn / 10 != 0)
    {
      print_number(argsls / 10);
      if (argsn > 0)
	{
	  _putchar(argsn % 10 + '0');
	}
      else
	{
	  _putchar(-argsn % 10 + '0');
	}
    }
  else if (argsn == 0)
    {
      _putchar('0');
    }
  else if ((argsn / 10 == 0) && (argsn % 10 != 0) && (argsn <= 0))
    {
      _putchar('-');
      _putchar(-argsn % 10 + '0');
    }
  else if ((argsn / 10 == 0) && (argsn % 10 != 0) && (argsn > 0))
    {
      _putchar((argsn % 10) + '0');
    }
}
