#include <ctype.h>
#include <stdio.h>

double atofcustom(char s[]);

int main()
{
    printf("%f", atofcustom("123.45e-4"));
}

/* atof:  convert string s to double, including scientific notation of the form 123.45e^-6 */
double atofcustom(char s[])
{
    double val, power;
    int i, sign, scisign, scivalue, scipower;
    for (i = 0; isspace(s[i]); i++) /* skip white space */
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }
    if (s[i] == 'e')
    {
        i++;
        scisign = (s[i] == '-') ? 0 : 1;
        if (s[i] == '+' || s[i] == '-')
            i++;
        for (scivalue = 0; isdigit(s[i]); i++)
            scivalue = 10 * scivalue + (s[i] - '0');
        for (int i = 0; i < scivalue; i++)
            scipower *= 10;
        if (scisign)
            return sign * val / power * scipower;
        else
            return sign * val / power / scipower;
    }
    return sign * val / power;
}
