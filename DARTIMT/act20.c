#include <stdio.h>

int main(void)
{
    char artForm;
    int x=4, y=1;
    scanf("%c", &artForm);
    for (int c=0; c<5; c++)
    {
        for(int d=0; d<x; d++)
            printf("+");
        for(int e=0; e<y; e++)
            printf("%c", artForm);
        for(int d=0; d<x; d++)
            printf("+");
        x--;
        y=y+2;
        printf("\n");
    }

}