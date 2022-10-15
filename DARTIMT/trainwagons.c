#include <stdio.h>

int main(void)
{
    int numberOfCars;
    scanf("%d", &numberOfCars);

    double weights[numberOfCars];
    double totalWeight = 0, weight, avgWeight;

    for(int c=0; c<numberOfCars; c++)
    {
        scanf("%lf", &weight);
        weights[c] = weight;
        totalWeight = totalWeight + weight;
    }
    avgWeight = totalWeight/numberOfCars;

    for (int c=0; c<numberOfCars; c++)
    {   
        if (weights[c] > avgWeight)
            printf("-%.1lf\n", weights[c]-avgWeight);
        else if (weights[c] < avgWeight)
            printf("%.1lf\n", avgWeight-weights[c]);
        else
            printf("%.1lf\n", weights[c]);
    }   

}