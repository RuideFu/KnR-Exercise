#include <stdio.h>
/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */
main()
{
     float fahr, celsius;
     float lower, upper, step;
     lower = 0;
     upper = 300;
     step = 20;
     /* lower limit of temperatuire scale */
     /* upper limit */
     /* step size */
     fahr = lower;
     printf("fahr celsius\n");
     while (celsius <= upper)
     {
          fahr = celsius * 1.8 + 32;
          printf("%6.1f %3.0f\n", celsius, fahr);
          celsius = celsius + step;
     }
}
