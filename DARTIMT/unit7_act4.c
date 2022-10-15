#include <stdio.h>

int main(void)
{
    char* com1 = "gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c libimage.c -o libimage.so";
    char* com2 = "gcc -std=c11 -Wall -fmax-errors=10 -Wextra superimage.c -limage -o superimage";

    printf("%s\n", com1);
    printf("%s\n", com2);
}