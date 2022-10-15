#include <stdio.h>

int main(void)
{
    double a = 5.0000000000;
    double b = 5.0000000001;
    int result;
    printf("check if a is equal to b\n");
    result = (a == b);
    if (result)
        printf("a is equal to b\n");
    else
        printf("a is not equal to b\n");
}