#include "holberton.h"

int _printf(const char *format, ...)
{
va_list argslist;
int i, j, l = 0;
specifiers_t specifiers[] = {
{"c", print_char},
{"s", print_string},
{"d", print_integer},
{"i", print_integer},
{"b", de_to_bi},
{NULL,NULL},
};
if (format == NULL)
return (-1);
va_start(argslist, format);
for (i = 0; format[i] != '\0'; i++)
{
if(format[i] == '%')
{
i++;
if (format[i] == '\0')
return (-1);
if (format[i] == '%')
{
_putchar(format[i]);
l++;
}
for (j = 0; (specifiers + j)->dir != NULL; j++)
{
if (format[i] == *(specifiers + j)->dir)
l += (specifiers + j)->f(argslist);
}
}
else
{
_putchar(format[i]);
l++;
}
}
va_end(argslist);
return (l);
}
