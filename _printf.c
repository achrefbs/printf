#include "holberton.h"
int _printf(const char *format, ...)
{
va_list argslist;
int i, j;
specifiers_t specifiers[] = {
{'c', print_char},
{'s', print_string},
};
va_start(argslist, format);
for (i = 0; format[i] != '\0'; i++)
{
	if (format[i] == '%')
		{
			for (j = 0; j < 2; j++)
			if (format[i + 1] == (specifiers + j)->dir)
			{
				(specifiers + j)->f(argslist);
				i += 1;
			}
		}
	else
		{
			_putchar(format[i]);
		}
}
return (0);
}
