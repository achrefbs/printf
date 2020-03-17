#include <unistd.h>
/**
 *_putchar- print one char
 *@c: charcater
 *Return: return write func
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
