#include <stdio.h>

/**
* main - print digit till 10
* Return: Always 0
*/
int main(void)
{
	
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar("%d", num);
	}
	putchar('\n');
	return (0);
}
