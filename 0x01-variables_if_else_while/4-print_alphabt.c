#include <stdio.h>

/**
* main - four alphabet
* Return: Always 0
*/
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
	if (lc !='q' && lc != 'e')
		{
			putchar(lc);
		}
	}
	putchar('\n');
	return (0);
}
