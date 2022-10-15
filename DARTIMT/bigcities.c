#include <stdio.h>

int main(void)
{
    int number, population, result = 0;
    scanf("%d", &number);
    for(int c=0; c<number; c++)
    {
        scanf("%d", &population);
        if (population > 10000)
            result = result + 1;
    }
    printf("%d\n", result);
}