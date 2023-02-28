#include "main.h"

/**
 * _strlen - finds the length of a string
 * @*s: pointer to the string to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
        int i = 0;

        while (*(s + i) != '\0')
        {
                i++;
        }
        return i;
}

/**
 * puts_half - prints the second half of a string
 * @*str: pointer to the string
 * Return: nothing
 */
void puts_half(char *str)
{
	int mid;
	int length = _strlen(str);

	if(length % 2 == 0)
		mid = length / 2;
	else
		mid = (length / 2) + 1;

	while(mid < length)
	{
		_putchar(*(str + mid));
		mid++;
	}
	_putchar('\n');
}
