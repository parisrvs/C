#include <stdio.h>

int main(void)
{
    double distance;
    scanf("%lf", &distance);
    double m = 0.621371;
    printf("%.6lf\n", distance*m);

    double number = 9.99999;
    printf("%.2lf\n", number);
}