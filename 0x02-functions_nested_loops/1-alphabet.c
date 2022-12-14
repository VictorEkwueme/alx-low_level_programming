#include "main.h"

/**
* main - Prints the alphabet, in lowercase, followed by a new line.
* Return: Always 0
*/
void print_alphabet(void)
{

	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar("alphabets in lower case from a-z", lc);
	}
	_putchar('\n');
}
