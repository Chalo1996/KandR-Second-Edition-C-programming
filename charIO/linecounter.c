#include <stdio.h>

int main ()
{
    int c, nl;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
    }
    printf("There are %d lines counted.\n", nl);

    return (0);
}
