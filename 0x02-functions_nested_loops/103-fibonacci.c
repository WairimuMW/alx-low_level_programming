#include <stdio.h>

/*
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int x, y, temp, sum;
	x = 1;
	y = 2;
	sum = 0;

	while(1)
	{
		if(y > 4000000)
			break;
		else
		{
			if(y % 2 == 0)
				sum +=y;
			temp = x + y;
			x = y;
			y = temp;
		}
	}
	printf("%d\n", sum);

	return(0);
}
