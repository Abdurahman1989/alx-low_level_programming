#include <stdio.h>
/**
*main - alphabet - (q and e).
*
* return 0
*/
int main(void)
{
	int i;

	for (i = 1; i < 5; i++)
	{
		if (i != 5 && i != 17)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
