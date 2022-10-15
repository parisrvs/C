#include <stdio.h>

int main(void)
{
    int number, guess, count = 0;
    scanf("%d", &number);
    do
    {
        scanf("%d", &guess);
        if (guess < number)
            printf("it is more\n");
        else if (guess > number)
            printf("it is less\n");
        count++;
    } while (number != guess);
    printf("Number of tries needed:\n%d\n", count);

}