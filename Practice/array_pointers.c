/*
    an array is a pointer. More spicifically,
    the name of an array is the address of the first element
    in the array.
*/

#include <stdio.h>

int main(void)
{
    int* count;
    scanf("%d", count);
    int array[*count];
    for (int c=0; c<*count; c++)
        scanf("%d", &array[c]);

    //int* ptr = array;

    for (int c=0; c<*count; c++)
        //printf("%d ", array[c]);
        printf("%d ", *(array+c));

    printf("\n");

    printf("address of the first element of the array is: %p\n", array);


    

}

