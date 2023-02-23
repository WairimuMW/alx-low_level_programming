#include "main.h"
#define MAXSTRING 50

/**
 * main - Print _putchar followed by a new line
 * Return: Always 0
 */

int main(void)
{
       	char name[] = "_putchar";
	int count;
    
	for (count = 0; count < MAXSTRING; count++)
    	{	
        	if (name[count] == '\0')
        	{
            		_putchar('\n');
            		break;
        	}
       	 	else
            		_putchar(name[count]);
    	}

    	return (0);
}
