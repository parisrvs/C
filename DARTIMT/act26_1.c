#include <stdio.h>

int main(void)
{
    double money, price;
    scanf("%lf%lf", &money, &price);

    double books = money/price;
    printf("%d\n", (int) books);
}