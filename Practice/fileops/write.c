#include <stdio.h>

int main(void)
{
    char* myfile = "myGrades.txt";
    FILE* fptr;
    fptr = fopen(myfile, "r");
    int grade, lastGrade, eof;
    scanf("%d", &grade);
    while(1)
    {
        eof = fscanf(fptr, "%d", &lastGrade);
        if (eof == EOF)
            break;
    }
    fclose(fptr);
    if(lastGrade != grade)
    {
        fptr = fopen(myfile, "a");
        fprintf(fptr, " %d ", grade);
        fclose(fptr);        
    }
    fptr = fopen(myfile, "r");
    while(fscanf(fptr, "%d", &grade) != EOF)
        printf("%d ", grade);

    printf("\n");
    fclose(fptr);
}