#include "main.h"
/**
* main - alphabets
* Return: Always 0
*/
int main(void)
{

	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
