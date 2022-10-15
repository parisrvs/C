#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

int main(void)
{
    int count;
    printf("number of elements in your array: ");
    scanf("%d", &count);
    int* array = (int*) malloc(count*sizeof(int));
    
    for (int c=0; c<count; c++)
        scanf("%d", array+c);

    int value;
    printf("the element you want to search: ");
    scanf("%d", &value);
    
    sortIntegers(array, count);
    printf("this array has been sorted\n");
    int result = searchInteger(array, count, value);
    if (result == -1)
        printf("not found\n");
    else
        printf("value: %d found at index: %d\n", *(array+result), result);

    for(int c=0; c<(count); c++)
        printf("value at index %d is %d\n", c, *(array+c));

    printf("\n");
    free(array);
    return 0;
}

