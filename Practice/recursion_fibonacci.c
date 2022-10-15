#include <stdio.h>

// Fibonacci numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
int fibonacci(int);
int fast_fibonacci(int);

int main(void)
{
    int number;
    scanf("%d", &number);
    if (number <= 0)
        return 1;    
    printf("%d\n", fibonacci(number));
    printf("%d\n", fast_fibonacci(number));
}

int fibonacci(int number)
{    
    if (number == 1)
        return 0;
    else if (number == 2)
        return 1;
    
    
    return (fibonacci(number-1) + fibonacci(number-2));
}

int fast_fibonacci(int number)
{
    int array[number];
    int sum;
    if (number == 1)
        return 0;
    else if (number == 2)
        return 1;
    else
    {
        array[0] = 0;
        array[1] = 1;
    }
    for (int c=2; c<number; c++)
    {
        sum = array[c-1] + array[c-2];
        array[c] = sum;
    }
    return sum;
}