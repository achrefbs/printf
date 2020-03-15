#include <stdio.h>
int _printf(const char *format, ...);
int print_char(char c);
int print_string(char *c);
typedef struct specifiers
{
	char dir;
	int (*f)();
}specifiers_t;

