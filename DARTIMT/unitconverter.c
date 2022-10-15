#include <stdio.h>

double convertLength(double);
double convertMass(double);
double convertTemp(double);

int main(void)
{
    int number;
    scanf("%d", &number);
    double d;
    char c;
    for (int x=0; x<number; x++)
    {
        scanf("%lf %c", &d, &c);
        if (c == 'm')
            printf("%.6lf ft\n", convertLength(d));
        else if (c == 'g')
            printf("%.6lf lbs\n", convertMass(d));
        else if (c == 'c')
            printf("%.6lf f\n", convertTemp(d));
    }
}


double convertLength(double d)
{
    return 3.2808*d;
}

double convertMass(double d)
{
    return 0.002205*d;
}

double convertTemp(double d)
{
    return (32 + (1.8*d));
}

