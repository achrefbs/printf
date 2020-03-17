#include "holberton.h"
int _printf(const char *format, ...)
{
va_list argslist;
int i, j, l = 0;
specifiers_t specifiers[] = {
{'c', print_char},
{'s', print_string},
{'d', print_integer}
};
va_start(argslist, format);
if (format == NULL)
return (-1);
for (i = 0; format[i] != '\0'; i++)
{
	if (format[i] == '%' && format [i + 1] != '\0')
		{
			for (j = 0; j < 2; j++)
			if (format[i + 1] == (specifiers + j)->dir)
			{
				l += (specifiers + j)->f(argslist);
				i += 1;
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				i += 1;
				l += 1;
			}
		}
	else if (format[i] == '%' && format[i + 1] == '\0')
	{
		return (-1);
	}
	
	else
		{
			_putchar(format[i]);
			l += 1;
		}
}
va_end(argslist);
return (l);
}
