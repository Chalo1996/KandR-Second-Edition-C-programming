#include <stdio.h>

#define PREVIOUSCHAR 'a'

int main ()
{
	int c, prev;

	prev = PREVIOUSCHAR;

	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
			putchar(c);
		else if (c == ' ')
		{
			if (prev != ' ')
				putchar(c);
		}
		prev = c;
	}
	return (0);
}
