#include <stdio.h>

/*Modify the temperature conversion program to print the table in reverse order,
that is, from 300 degrees to 0.*/
int main()
{
     printf("fahr celsius\n");
     for (float fahr = 300; fahr >= 0; fahr = fahr - 20)
     {
          float celsius = (5.0 / 9.0) * (fahr - 32.0);
          printf("%3.0f %6.1f\n", fahr, celsius);
     }
}
