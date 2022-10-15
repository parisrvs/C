#include <stdio.h>
#include "myio.h"

int main(void)
{
    printf("enter an integer number: ");
    int c = get_int();
    printf("%d + 1 = %d\n", c, c+1);
    printf("%d * 2 = %d\n", c, c*2);
    printf("%d / 2 = %d\n", c, c/2);
    printf("%d - 6 = %d\n", c, c-6);    

    printf("\n");

    printf("enter a decimal number: ");
    double d = get_double();
    printf("%lf + 1.1 = %.10lf\n", d, d+1.1);
    printf("%lf * 2.23 = %.10lf\n", d, d*2.23);
    printf("%lf / 2.11 = %.10lf\n", d, d/2.11);
    printf("%lf - 6.12 = %.10lf\n", d, d-6.12);

    printf("\n");

    printf("enter a character: ");
    char e = get_char();
    printf("%c + 1 = %c\n", e, e+1);
    printf("%c + 1 = %d\n", e, e+1);

    printf("\n");

    printf("enter a string: ");    
    char *s = get_string();
    int len = strlen(s);
    printf("your string is: %s\n",s);
    printf("the length of your string is: %d\n", len);
    free(s);
}

