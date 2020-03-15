#include "holberton.h"
int _printf(const char *format, ...)
{
va_list args;
int i;
specifiers_t specifiers[] = {
{"c", print_char},
{"s", print_string},
{"%", print_char('%')},
{NULL, NULL}
};
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
	if (format[i] == '%')
		{
			if (format[i + 1] == (specifiers + i)-> dir)
			{
				(specifiers + i)->f(va_arg(args, char));
			}
		}
	else
		{
			print_char(format[i]);
		}
}





}
