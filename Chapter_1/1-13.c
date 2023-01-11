#include <stdio.h>

#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */
#define MAXL 10 /* max length for a word */

/*Write a program to print a histogram of the lengths of words in its input*/
int main()
{
    int wl, c, state; // word length
    int lc[MAXL];     // length count
    for (int i = 0; i < MAXL; i++)
    {
        lc[i] = 0;
    }
    wl = 0;
    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else
        {
            if (state == OUT)
            {
                state = IN;
                lc[wl]++;
                wl = 0;
            }
            wl++;
        }
    }
    for (int i = 1; i < MAXL; i++)
    {
        printf("%d ", i);
        for (int j = 0; j < lc[i]; j++)
        {
            printf("%c", '#');
        }
        printf("%c", '\n');
    }
}