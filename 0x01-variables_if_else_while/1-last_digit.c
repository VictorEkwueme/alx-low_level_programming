#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry
* Return: Always 0
*/
int main(void){

	int n;
	int a;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 15;

	if (a > 5)
	{
		printf("%d and is greater than 5", n, a);
	}
	else if (a == 0)
	{
		printf("%d and is 0", n, a);
	}
	else 
	{
		printf("%d and is less than 6 and not 0", n)
	}

	Return (0);
 }

