#include <stdio.h>

/* count tabs in input */
#define TARGET '\t'
/* count spaces in input */
// #define TARGET ' '
/* count lines in input */
// #define TARGET '\n'

int main()
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == TARGET)
            ++nl;
    printf("%d\n", nl);
}