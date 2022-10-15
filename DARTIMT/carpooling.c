#include <stdio.h>

int main(void)
{
    int passengers;
    double gas;
    scanf("%d %lf", &passengers, &gas);
    if (passengers == 0)
        printf("%.2lf\n", gas);
    else
        printf("%.2lf\n", (1+gas)/(passengers+1));
}