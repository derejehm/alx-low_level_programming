#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - main function
*Return: 0- to exit
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
