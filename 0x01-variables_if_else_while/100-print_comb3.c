#include <stdio.h>
/**
*main - two digits
*
* return 0
*/
int main(void)
{
int n, m;

for (n = 28; n <= 36; n++) 
{
for (m = 29; m <= 37; m++)
{
if (m > n)
{
putchar(n);
putchar(m);
if (n != 36 || m != 37)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
