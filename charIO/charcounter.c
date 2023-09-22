#include <stdio.h>

int main ()
{
    size_t numchars = 0;

    while (getchar() != EOF)
    {
        ++numchars;
    }
    printf("%ld\n", numchars);

return (0);
}
