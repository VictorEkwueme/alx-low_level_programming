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
		printf("%d", n);
	}
	else
	{
		printf ("enter a number greater than zero");
	}
	return (0);
}

