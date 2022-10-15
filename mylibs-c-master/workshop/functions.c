#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "/home/parijat/Codes/mylibs-c/myio/myio.h"
#include "/home/parijat/Codes/mylibs-c/myalgo/myalgo.h"


void playWithIntegerArrays(void)
{
    int c =1;
    do
    {
        printf("Initialize/Sort/Search - Integer Array\n");
        printf("enter the size of the array? ");
        int size = get_int();
        int* array = getIntegerArray(size);    
        sortIntegers(array, size);
        printf("Sorted Array:\n");
        printIntegerArray(array, size);
        printf("The element you want to search? ");
        int value = get_int();
        int result = searchInteger(array, size, value);
        if (result == -1)
            printf("%d is not in the Array.\n", value);
        else
            printf("%d is in the Array.\n", *(array+result));
        free(array);
        printf("Enter 0 to Exit. Any other digit to repeat this process.\n");
        c = get_int();
    } while (c != 0);
}

void testiofunctions(void)
{
    printf("Test input/output Functions\n");
    int c = 0;
    do
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
        printf("Enter 0 to Exit. Any other digit to repeat this process.\n");
        c = get_int();
    } while (c != 0);    
}

void calculate_gcd(void)
{
    printf("Calculate the Greatest Common Divisor of two Numbers.\n");
    int c;
    do
    {
        int a,b;
        do
        {
            printf("enter a non-negative integer: ");
            a = get_int();
            printf("enter another non-negative integer: ");
            b = get_int();
        } while (a < 0 || b < 0);
        printf("Greatest Common Divisor of %d and %d is %d\n", a, b, gcd(a, b));
        printf("Enter 0 to Exit. Any other digit to repeat this process.\n");
        c = get_int();
    } while (c != 0);    
}

void baseconversion(void)
{
    printf("Convert a number from base10 (decimal) to any other base\n");
    int c;
    do
    {
        printf("Enter a decimal Integer: ");
        int num = get_int();
        printf("Enter a number for the base - greater than or equal to 2 and less than or equal to 16: ");
        int base = get_int();
        if (base >= 2 && base <=16)
            convertBase(num, base);
        else
            printf("wrong Choice\n");
        printf("Enter 0 to Exit. Any other digit to repeat this process.\n");
        c = get_int();
    } while (c != 0);
}


void datecalculation(void)
{
    printf("Program to calculate the next date after n number of days\n");
    int c;
    do
    {
        int day, month, year, incriment;
        do
        {
            printf("enter the date between 1 to 31: ");
            day = get_int();
            printf("enter the month between 1 to 12: ");
            month = get_int();
            printf("enter the year: ");
            year = get_int();
            printf("enter a positive value for the number of days you want to incriment this date: ");
            incriment = get_int();
        } while ( (day <=0 || day >= 31) || (month <= 0 || month >= 12) || (year <=0 ) || (incriment <= 0));
        incrimentDate(day, month, year, incriment);
        printf("Enter 0 to Exit. Any other digit to repeat this process.\n");
        c = get_int();
    } while (c != 0);    
}