#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - main function
*Return: 0- to exit
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is postive\n", n);
	}
	else if (n == 0)
	{
		printf("%d 0 is zero", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}