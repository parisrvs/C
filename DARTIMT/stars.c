#include <stdio.h>

int main(void)
{
    int number;
    scanf("%d", &number);
    for (int c=0; c<number; c++)
    {
        for(int d=0; d<number; d++)
            printf("*");
        printf("\n");
    }
}