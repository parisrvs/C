#include <stdio.h>

int main(void)
{
    int population;
    scanf("%d", &population);
    int affected = 1, day = 1, totalAffected = 1;    
    while (totalAffected < population)
    {   
        day++;        
        affected = 2*affected;
        totalAffected = totalAffected + affected;        
        printf("total affected: %d, affected today: %d, day: %d\n", totalAffected, affected, day);
    }
    printf("%d\n", day);
}