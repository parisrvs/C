#include <stdio.h>

int min(int, int);

int main(void)
{
    int number, minimum, a;
    scanf("%d", &number);

    scanf("%d", &minimum);
    for (int c=0; c<number-1; c++)
    {
        scanf("%d", &a);
        minimum = min(minimum, a);
    }
    printf("%d\n", minimum);
}

int min(int a, int b)
{
    if (a<b)
        return a;
    else
        return b;
    
}