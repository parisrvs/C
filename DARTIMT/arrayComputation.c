#include <stdio.h>

int main(void)
{
    int number, c;
    double totalCost = 0;
    scanf("%d", &number);
    double price[number], weight[number];
    for (c=0; c<number; c++)
        scanf("%lf", &price[c]);
    for (c=0; c<number; c++)
        scanf("%lf", &weight[c]);
    for(c=0; c<number; c++)
        totalCost = totalCost + (price[c]*weight[c]);

    printf("%.6lf\n", totalCost);

}