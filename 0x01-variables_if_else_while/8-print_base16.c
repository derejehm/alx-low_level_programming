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

	for (c = 48; c <= 57; c++)
		putchar(c);
	for (c = 97; c <= 102; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
