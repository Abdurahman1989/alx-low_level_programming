#include <stdio.h>
/**
*main - print single digits
*
* return 0
*/
int main(void)
{

int n;

for (n = 17; n < 27; n++)
	{
		putchar(n);
	if (n != 26)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
