#include <stdio.h>

int main(void)
{
    int c;
    int d;
    printf("enter two numbers: ");
    scanf("%d%d", &c, &d);
    int e = (c && d);
    printf("%d and %d = %d\n", c, d, e);

    printf("enter two numbers: ");
    scanf("%d%d", &c, &d);
    e = (c || d);
    printf("%d or %d = %d\n", c, d, e);
}


