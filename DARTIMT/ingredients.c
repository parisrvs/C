#include <stdio.h>

int main(void)
{
    int array[10];
    int value = 0;
    for (int c=0; c<10; c++)
    {
        scanf("%d", &value);
        array[c] = value;
    }
    scanf("%d", &value);
    printf("%d\n", array[value]);



}