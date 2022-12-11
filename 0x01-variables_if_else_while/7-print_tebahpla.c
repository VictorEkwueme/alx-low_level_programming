#include <stdio.h>

/**
* main - alphabet in reverse form
* Return: Always 0 (success)
*/
int main(void)
{

	char lc;

	for (lc = 'z'; lc <= 'a'; lc--)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
