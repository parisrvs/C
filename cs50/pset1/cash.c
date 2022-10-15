#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{    
    float owed;
    do
    {
        owed = get_float("Change owed: ");

    }while(owed <= 0);
    int Owed = round(owed*100);
    int quarters = 25, dimes = 10, nickels = 5, pennies = 1, coins = 0;
    while(Owed != 0)
    {
        if(Owed >= quarters)
        {
            Owed = Owed - quarters;
            coins++;
        }
        else if (Owed >= dimes)
        {
            Owed = Owed - dimes;
            coins++;
        }
        else if (Owed >= nickels)
        {
            Owed = Owed - nickels;
            coins++;
        }
        else if (Owed >= pennies)
        {
            Owed = Owed - pennies;
            coins++;
        }
    }
    printf("%d\n", coins);
}