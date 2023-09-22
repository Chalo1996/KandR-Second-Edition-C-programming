#include <stdio.h>

// #define EOF -1

int main ()
{
    int c;
    FILE *fp;
    fp = fopen("test.txt", "w");
    printf("Enter text: \n");
    while ((c = getchar()) != EOF)
    {
        putc(c, fp);
    }
    fclose(fp);
    fp = fopen("test.txt", "r");
    printf("Text on the file: \n");
    while ((c = getc(fp)) != EOF)
    {
        putchar(c);
    }
    fclose(fp);

    return (0);
}
