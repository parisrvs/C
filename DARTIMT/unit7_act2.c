#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    scanf("%i", &n);
    printf("%.8lf\n", sqrt(n));
    printf("%.10lf\n", exp(1.0));
    char* command = "gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.c -lm -o program";

    //char* command1 = "gcc -std=c11 -Wall -fmax-errors=10 -Wextra vizplus.c -ljpeg -o vizplus";
    printf("%s\n", command);
}

