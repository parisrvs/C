#include <stdio.h>

int main(void)
{
    FILE* fptr = fopen("gradeComparison.txt", "r");

    double myGrade, grades;
    fscanf(fptr, "%lf", &myGrade);
    int count = 1;
    int result = 1;

    while(fscanf(fptr, "%lf", &grades) != EOF)
    {
        count++;
        if (grades > myGrade)
        {
            result = 0;
            break;
        }
    }
    count--;
    if(result == 0)
        printf("No %d\n", count);        
    else
        printf("Yes\n");
        

    fclose(fptr);
}