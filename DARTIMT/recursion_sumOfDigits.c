#include <stdio.h>

int sumOfDigits(int);

int main(void)
{
    int digit;
    scanf("%d", &digit);
    printf("%d\n", sumOfDigits(digit));

}

int sumOfDigits(int digit)
{
    if (digit < 10)
        return digit;
    else
    {
        return ((digit%10) + sumOfDigits(digit/10));
    }
    
}