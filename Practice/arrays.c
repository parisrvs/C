#include <stdio.h>

int main(void)
{
    int size;
    printf("enter the size of your array: ");
    scanf("%d", &size);
    int array[size];
    int value;
    for (int c=0; c<size; c++)
    {
        printf("enter a value: ");
        scanf("%d", &value);
        array[c] = value;
    }
    for(int c=0; c<size; c++)
        printf("%d\n", array[c]);

}