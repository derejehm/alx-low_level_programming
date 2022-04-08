#include <stdio.h>
/**
*main - main function
*Return: 0- to exit
*/
int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
