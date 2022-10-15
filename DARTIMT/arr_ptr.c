#include <stdio.h>

void reverseArray(int*);

int main(void)
{
    int array[6];
    for(int c=0; c<6; c++)
        scanf("%d", &array[c]);

    reverseArray(array);

    for(int c=0; c<6; c++)
        printf("%d ", *(array+c));
    printf("\n");
}

void reverseArray(int* array)
{
    int temp, count = 5;
    
    for (int c=0; c<3; c++)
    {
        temp = *(array + c);
        *(array + c) = *(array + count);
        *(array + count) = temp;
        count--;
    }
}