#include "main.h"
#include <unistd.h>

/**
* main - prints _putchar, followed by a new line
* Return: Always 0 (Success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
