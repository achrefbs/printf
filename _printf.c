#include "holberton.h"
int _printf(const char *format, ...)
{
int i;
specifiers_t specifiers[] = {
{"c", print_char},
{"s", print_string},
{"%", print_char('%')},
{NULL, NULL}
};

for (i = 0; format[i] != '\0'; i++)
{
	if (format[i] == '%')
	{
		if (format[i + 1] == (specifiers + i)-> dir)
		{
			(specifiers + i)->f();
		}
		else
		{
			print_char(format[i]);
		}
		
	}
	
}





}
