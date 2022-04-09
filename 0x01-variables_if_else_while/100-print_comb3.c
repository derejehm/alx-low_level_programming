#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - main function
*Return: 0- to exit
*/
int main(void)
{
	int x;
	int y = 0;

	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			if (y != x && y < x)
			{
				putchar('0' + y);
				putchar('0' + x);
				if (x + y != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			x++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}
