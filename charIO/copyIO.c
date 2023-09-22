#include <stdio.h>

#define NONBLANKS 'a'

int main ()
{
    int c, lastc = NONBLANKS;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
            putchar(c);
        else if (c == ' ')
        {
            if (lastc != ' ')
                putchar(c);
        }
        lastc = c;
    }
    return (0);
}
