#include "holberton.h"
#include <unistd.h>
int print_string(char *c)
{
int x;
for (x = 0; c[x] != '\0'; x++)
{
write (1, &c[x], x);
}
return (0);
}
