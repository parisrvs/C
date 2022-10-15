#include <stdio.h>

int main(void)
{
    int hours;
    scanf("%d", &hours);
    int basePrice = 10;
    int additionlPrice = 5*hours;
    int totalPrice = basePrice + additionlPrice;
    if (totalPrice > 53)
        printf("%d\n", 53);
    else
        printf("%d\n", totalPrice);
}