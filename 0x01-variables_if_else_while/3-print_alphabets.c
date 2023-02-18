#include <stdio.h>

int main(void)
{
	char u_case = 'A';
	char l_case = 'a';

	while (l_case <= 'z')
	{
		putchar(l_case);
		++l_case;
	}
	while (u_case <= 'Z')
        {
                putchar(u_case);
                ++u_case;
        }
	putchar('\n');
	return (0);
}
