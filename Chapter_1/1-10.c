#include <stdio.h>

#define TAB '\t'
#define SPACE ' '

/*Write a program to copy its input to its output,
replacing each tab by \t, each backspace by \b, and each backslash by \\.
This makes tabs and backspaces visible in an unambiguous way.*/

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