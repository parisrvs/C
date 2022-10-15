#include <stdio.h>

int main(void)
{
    int a,b;
    scanf("%d%d", &a, &b);
    int c = a+b;
    if (c >= 10)
        printf("Special tax\n%d\n", 36);
    else
        printf("Regular tax\n%d\n", 2*(a+b));
}
