#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: array of strings
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i, count = 0;
	
	for(i = 1; i < argc; i++)
		count += 1;
	printf("%d\n", count);
	return (0);
}
