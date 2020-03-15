#include "holberton.h"
int print_string(char *c)
{
int x;
for (x = 0; c[x] != '\0'; x++)
{
print_char(c[x]);
}
return (0);
}
