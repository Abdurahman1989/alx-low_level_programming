#include <stdio.h>
/**
*main - print three digits
*
* return 0
*/
int main(void)
{
int n, m, l;

for (n = 28; n <= 38; n++)
{
for (m = 29; m <= 38; m++)
{
for (l = 30; l <= 38; l++)
{
if (l > m && m > n)
{
putchar(n);
putchar(m);
putchar(l);
if (n != 35 || m != 36)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
