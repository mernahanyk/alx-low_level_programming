#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* this code runsrandome numbers and print its status whither negative or positive or zero */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2; 

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
    		printf("%i is Zero\n",n);
	}
	return (0);
}
