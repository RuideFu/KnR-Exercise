#include <stdio.h>

int ftoc(int m);

/* Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.*/
int main()
{
    int fahr;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    /* lower limit of temperature scale */
    /* upper limit */
    /* step size */
    fahr = lower;
    while (fahr <= upper)
    {
        printf("%d\t%d\n", fahr, ftoc(fahr));
        fahr = fahr + step;
    }
}

int ftoc(int fahr)
{
    return 5 * (fahr - 32) / 9;
}
