#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main ()
{
	int c, nl, wc, nc, state;

	state = OUT;
	nl = wc = nc = 0;

	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\t' || c == '\n')
		{
			state = OUT;
		}
		else if (state == OUT)
		{
			state = IN;
			++wc;
		}
	}
	printf("\n Characters: %d\n New Line Char: %d\n Words: %d\n", nc, nl, wc);
	return (0);
}
