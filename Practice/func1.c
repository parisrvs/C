//add two numbers

#include <stdio.h>
int sum(int a, int b);

int main(void)
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("sum of %d and %d is %d\n", a, b, sum(a,b));
}

int sum(int a, int b)
{
    return a+b;
}
    
