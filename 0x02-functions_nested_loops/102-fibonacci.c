#include <stdio.h>

/*
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int x, y, temp, count;
	x = 1;
	y = 2;
	printf("%d", x);

	for(count = 0; count < 49; count++)
	{
		printf(", %d", y);
		temp = x + y;
		x = y;
		y = temp;
	}
	printf("\n");

	return (0);
}
