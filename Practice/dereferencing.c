#include <stdio.h>

int main(void)
{
    int a = 10;
    int* addressOf_a = &a;
    printf("a is %d, and the address of a is %p\n", *addressOf_a, addressOf_a);

    *addressOf_a = 20;
    printf("new value of a is %d, and address of a is %p\n", *addressOf_a, addressOf_a);

    *addressOf_a = *addressOf_a +1;
    printf("new value of a after adding 1 is %d, and address of a is %p\n", *addressOf_a, addressOf_a);


}