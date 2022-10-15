#include <stdio.h>

int main(void)
{
    int players;
    scanf("%d", &players);
    int teamA = 0;
    int teamB = 0;
    int weight;
    for(int c=0; c<(players*2); c++)
    {
        scanf("%d", &weight);
        if (c%2 == 0)
            teamA = teamA + weight;
        else
            teamB = teamB + weight;
    }
    if (teamA > teamB)
    {
        printf("Team 1 has an advantage\n");
        printf("Total weight for team 1: %d\n", teamA);
        printf("Total weight for team 2: %d\n", teamB);
    }
    else
    {
        printf("Team 2 has an advantage\n");
        printf("Total weight for team 1: %d\n", teamA);
        printf("Total weight for team 2: %d\n", teamB);
    }
}