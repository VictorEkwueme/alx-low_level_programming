#include <stdio.h>

/**
* main - hexadecimal numbersin lower case
* Return: Alway 0
*/
int main(void)
{

	int n;
	char lc;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (lc = 'a'; lc <= 'f'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
