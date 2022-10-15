#include <stdio.h>

int main(void)
{
    int a = 42;
    double d = 58.234;
    char c = 'r';
    int* addressOf_a = &a;
    double* addressOf_d = &d;
    char* addressOf_c = &c;
    printf("address of a is %p\naddress of d is %p\nadderss of c is %p\n", addressOf_a, addressOf_d, addressOf_c);

    printf("at the address %p, the value stored is %d\n", addressOf_a, *addressOf_a);
    printf("at the address %p, the value stored is %.2lf\n", addressOf_d, *addressOf_d);
    printf("at the address %p, the value stored is %c\n", addressOf_c, *addressOf_c);

    return 0;
}