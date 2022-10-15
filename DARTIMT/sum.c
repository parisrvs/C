#include <stdio.h>

int main(void)
{
    int value = 0;
    scanf("%d", &value);
    int sum = value;
    while (value != -1)
    {
        scanf("%d", &value);
        sum = sum + value;
    }
    if(sum == -1)
        printf("%d\n", 0);
    else
        printf("%d\n", sum+1);
}