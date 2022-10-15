#include <stdio.h>

int main(void)
{
    double temp;
    scanf("%lf", &temp);
    printf("%.1lf\n", temp*9.0/5.0 + 32.0);
}