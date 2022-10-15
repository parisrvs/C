#include <stdio.h>

int main(void)
{
    double amount;
    scanf("%lf", &amount);
    double bags = amount/120;
    int intBags = ((int) bags)+1;
    printf("%d\n", intBags*45);
}