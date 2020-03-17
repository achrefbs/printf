#include <stdio.h>
#include <math.h>

long de_to_bi(int d)
{
long b = 0;
int r, tmp = 1;
while (d != 0)
{
r = d % 2;
d = d / 2;
b = b + r * tmp;
tmp = tmp * 10;
}
return b;
}
