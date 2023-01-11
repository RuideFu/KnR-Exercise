#include <stdio.h>

/* Write a program to print a histogram of the frequencies of different characters in its input.*/
int main()
{
    int c;
    int ccount[93]; // character counts

    for (int i = 0; i < 94; ++i)
        ccount[i] = 0;
    while ((c = getchar()) != EOF)
        if (c >= '!' && c <= '~')
            ++ccount[c - '!'];

    printf("Histogram: \n");
    for (int i = 0; i < 94; i++)
    {
        printf("%c\t", i + '!');
        for (int j = 0; j < ccount[i]; j++)
        {
            printf("%c", '#');
        }
        printf("%c", '\n');
    }
}