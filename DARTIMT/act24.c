#include <stdio.h>

int main(void)
{
    int count, grade;
    double sum = 0;    
    scanf("%d", &count);
    for(int c=0; c<count; c++)    
    {
        scanf("%d", &grade);
        sum = sum + (double) grade;        
    }
    double avg = sum / (double) count;
    printf("%.2lf\n", avg);
}