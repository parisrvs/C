#include <stdio.h>

int main(void)
{
    int count, enginePower, resistance, weight, height, power=0;
    scanf("%d", &count);
    for (int c = 0; c < count; c++)
    {
        scanf("%d%d%d%d", &height, &weight, &enginePower, &resistance);
        power = power + ((enginePower + resistance) * (weight - height));
    }
    printf("%d\n", power);
}