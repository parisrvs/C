#include <stdio.h>

int factorial(int);
int main(void)
{
    int f;
    scanf("%d", &f);
    printf("%d\n", factorial(f));

}

int factorial(int f)
{
    if (f == 1 || f == 0)
        return 1;
    else
        return (f)*factorial(f-1);
}