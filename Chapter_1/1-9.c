#include <stdio.h>

/*Write a program to copy its input to its output,
replacing each string of one or more blanks by a single blank.*/
int main()
{
    int c;
    int first_space = 0;
    int second_space = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (first_space == 0)
            {
                putchar(c);
                first_space = 1;
            }
            else
            {
                second_space = 1;
            }
        }
        else
        {
            if (first_space == 1)
            {
                first_space = 0;
            }
            putchar(c);
        }
    }
}