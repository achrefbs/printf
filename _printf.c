#include "holberton.h"
int _printf(const char *format, ...)
{
va_list args;
int i, j = 0;
specifiers_t specifiers[] = {
{'c', print_char},
{'s', print_string},
};
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
	if (format[i] == '%')
		{
			if (format[i + 1] == (specifiers + j)->dir)
			{
				(specifiers + j)->f();
			}
		}
	else
		{
			_putchar(format[i]);
		}
}
return (0);
}
