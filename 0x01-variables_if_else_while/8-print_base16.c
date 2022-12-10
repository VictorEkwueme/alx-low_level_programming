#include <stdio.h>

/** * main - hexadecimal numbersin lower case
* Return: Alway 0
*/
int main(void)
{
	char lc;

	for (lc = 'a'; lc < 'g'; lc++)
	{
		putchar("%d", lc);
	}
	putchar('\n');
	return (0);
}
