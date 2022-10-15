#include <stdio.h>

int main(void)
{
    FILE* fptr = fopen("studentGrades.txt", "r");

    int num, sum = 0, temp;
    double avg;
    fscanf(fptr, "%d", &num);

    for(int c=0; c<num; c++)
    {
        fscanf(fptr, "%d", &temp);
        sum = sum + temp;
    }
    avg = (double) sum / (double) num;
    printf("%.2lf\n", avg);

    fclose(fptr);
}