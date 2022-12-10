#include <stdlib.h>
#include <time.h>
/* main - if and else */
/* Return - Return 0 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n=0; n>6; n++){
		printf("%d", n);
	}
	return (0);
}

