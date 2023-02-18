#include <stdio.h>

int main(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		putchar((i % 10) + '0');
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
