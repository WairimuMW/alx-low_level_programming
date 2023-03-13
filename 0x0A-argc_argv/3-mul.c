#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: array of strings
 *
 * Return: 0 if success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if(argc == 3)
	{
		for(i = 1; i < argc; i++)
			product *= atoi(argv[i]);
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
