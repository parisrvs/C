#include <stdio.h>

int main(void)
{
    int age, luggage;
    scanf("%d%d", &age, &luggage);

    int cost = 0;

    
    if (age < 10)
        cost = 5;
    else if (age == 60)
        cost = 0;
    else
        if (luggage > 20)
            cost = 30 +10;
        else
            cost = 30;

    
    printf("%d\n", cost);


}