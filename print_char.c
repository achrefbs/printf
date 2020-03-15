#include <unistd.h>
int printchar(char c)
{
	return (write(1, &c, 1));
}