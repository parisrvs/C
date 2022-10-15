#include <stdio.h>

void behind(int *, int);

int main(void)
{
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++)
        scanf("%d", &array[i]);

    behind(array, N);

    for (i=0; i<N; i++)
        printf("%d\n", array[i]);
    
    return 0;
}

void behind(int* array, int len)
{
    int max = -1;
    for (int c=0; c<len; c++)
        if (max < *(array+c))
            max = *(array+c);

    for(int c=0; c<len; c++)
        *(array+c) = max - (*(array+c));
}