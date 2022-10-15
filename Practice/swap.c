#include <stdio.h>

void swap(int*, int*);

int main(void)
{
    int a, b;
    printf("value of a: ");
    scanf("%d", &a);
    printf("value of b: ");
    scanf("%d", &b);


    int* aptr = &a;
    int* bptr = &b;
    printf("value of a is: %d\nvalue of b is %d\n", *aptr, *bptr);
    swap(aptr, bptr);
    printf("value of a is: %d\nvalue of b is %d\n", *aptr, *bptr);
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}