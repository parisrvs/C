#include <stdio.h>

int main(void)
{
    int count, sum=0, number;
    printf("how many numbers? ");
    scanf("%d", &count);
    for (int c=0; c<count; c++)
    {
        printf("enter a number: ");
        scanf("%d", &number);
        sum = sum + number;
        printf("\n");
    }
    printf("sum of %d numbers is %d\n", count, sum);        
}
