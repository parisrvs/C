#include <stdio.h>

int main(void)
{
    int population;
    double rise;
    scanf("%d%lf", &population, &rise);
    int intRise = (int) rise;
    int newPopulation = population + ((population*intRise)/100);
    printf("%d\n", newPopulation);
}