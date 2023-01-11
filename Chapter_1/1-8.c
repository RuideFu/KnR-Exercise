#include <stdio.h>

/* count tabs in input */
#define TARGET '\t'
/* count spaces in input */
// #define TARGET ' '
/* count lines in input */
// #define TARGET '\n'

/*Write a program to count blanks, tabs, and newlines.*/
int main()
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == TARGET)
            ++nl;
    printf("%d\n", nl);
}