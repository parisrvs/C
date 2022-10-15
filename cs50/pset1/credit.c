#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    long int number = get_long("Number: ");
    int digits = 0, counter = 1, sum1 = 0, sum2 = 0, temp = 0;
    long int c = number;

    while(c > 0)
    {
        if(counter%2 == 0)
        {
            temp = c%10;
            temp = temp*2;
            if(temp > 9)
            {
                sum2 = sum2 + (temp%10);
                sum2 = sum2 + (temp/10);
            }
            else
                sum2 = sum2 + temp;
            c=c/10;
        }
        else
        {
            sum1 = sum1 + (c%10);
            c = c/10;            
        }
        counter++;
    }
    int sum = sum1+sum2;
    counter--;

    if (sum%10 != 0)
        printf("INVALID\n");
    else
    {
        if(counter == 15 && ((number/((long int)(pow(10, counter-2)))) == 34 || ((long int)(number/(pow(10, counter-2)))) == 37))
            printf("AMEX\n");
        else if (counter == 16 && ((number/((long int)(pow(10, counter-2)))) >= 51 && ((long int)(number/(pow(10, counter-2)))) <= 55))
            printf("MASTERCARD\n");
        else if ((counter == 16 || counter == 13) && ((long int)(number/(pow(10, counter-1)))) == 4)
            printf("VISA\n");
        else
            printf("INVALID\n");
    }
}