#include <stdio.h>

#define TAB '\t'
#define SPACE ' '

int main()
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == TAB)
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == SPACE)
        {
            putchar('\\');
            putchar('b');
        }
        else
        {
            putchar(c);
        }
}