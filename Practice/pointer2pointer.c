#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count, elt, value;
    printf("number of arrays: ");
    scanf("%d", &count);
    int** arr = malloc(sizeof(int*)*count);
    int* sizes = malloc(sizeof(int)*count);


    for(int c=0; c<count; c++)    
    {
        printf("number of elements: ");
        scanf("%d", &elt);
        *(sizes+c) = elt;
        *(arr+c) = malloc(sizeof(int)*elt);
        printf("enter %d numbers: ", elt);
        for(int d=0; d<elt; d++)
        {            
            scanf("%d", &value);
            *((*(arr+c))+d) = value;
        }            
    }

    for(int c=0; c<count; c++)
    {
        for(int d=0; d<*(sizes+c); d++)
            printf("%d ", *((*(arr+c))+d));
        printf("\n");
    }
    for(int c=0; c<count; c++)
        free(*(arr+c));
    free(arr);
    free(sizes);
}