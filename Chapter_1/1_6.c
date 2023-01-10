#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        int isEof = c != EOF;
        printf("%d \n", isEof);
    }
}
