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
	int lastDigit;
	char first[] = "Last digit of %d is %d and is 0\n";
	char second[] = "Last digit of %d is %d and is greater than 5\n";
	char third[] = "Last digit of %d is %d and is less than 6 and not 0\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit == 0)
	{
		printf(first, n, lastDigit);
	}
	else if (lastDigit > 5)
	{
		printf(second, n, lastDigit);
	}
	else
	{
		printf(third, n, lastDigit);
	}
	return (0);
}
