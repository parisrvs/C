#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    } while (height < 1 || height > 8);
    int l = height-1;
    for(int c=0; c<height; c++)
    {
        for(int d=0; d<l; d++)
            printf(" ");
        for(int e=0; e<c+1; e++)
            printf("#");
        printf("  ");
        l--;
        printf("\n");
    }
}