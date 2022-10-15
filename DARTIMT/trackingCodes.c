#include <stdio.h>

int getSize(int, char);

int main(void)
{
    int number, length, sum = 0;
    char type;
    scanf("%d", &number);

    for(int c=0; c<number; c++)
    {
        scanf("%d %c", &length, &type);
        int s = getSize(length, type);
        if (s == -1)
        {
            printf("Invalid tracking code type\n");
            return 1;
        }
        else
            sum = sum + s;
    }
    printf("%d bytes\n", sum);

}

int getSize(int length, char type)
{
    if (type == 'i')
        return length*(sizeof(int));
    else if (type == 'd')
        return length*(sizeof(double));
    else if (type == 'c')
        return length*(sizeof(char));
    else
        return -1;
}