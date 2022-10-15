#include <stdio.h>

int main(void)
{
    int intOne;
    double doubleTwo;
    scanf("%d%lf", &intOne, &doubleTwo);

    printf("before casting: integer value  = %d and float value = %lf\n", intOne, doubleTwo);

    int temp = intOne;
    intOne = (int) doubleTwo;
    doubleTwo = (double) temp;

    printf("After casting: integer value  = %d and float value = %lf\n", intOne, doubleTwo);

}