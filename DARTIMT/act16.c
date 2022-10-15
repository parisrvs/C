#include <stdio.h>

int main(void)
{
    int table = 8;
    for (int c=0; c<=10; c++)
        printf("%dx%d = %d\n", c, table, c*table);
}