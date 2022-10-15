#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

int main(void)
{
    int count;
    scanf("%d", &count);
    int* array = (int*) malloc((count)*sizeof(int));

    for (int c=0; c<(count); c++)
        scanf("%d", array+c);    

    sortIntegers(array, count);

    for(int c=0; c<(count); c++)
        printf("%d ", *(array+c));

    printf("\n");
    free(array);
    return 0;
}
