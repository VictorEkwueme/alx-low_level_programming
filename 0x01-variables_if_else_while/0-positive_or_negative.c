#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* main - if and else */
/* Return -Always 0 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) 
	{
		printf("%d is a positive number\n", n);
	}
	else if (n == 0)
	{
		print("%d please enter a positive number\n" n);
	else
	{
		printf("enter a number greater than zero");
	}
	return (0);
}

