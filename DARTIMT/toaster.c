#include <stdio.h>

int getSize(int, char);

int main(void)
{
    int number;
    char type;
    scanf("%c%d", &type, &number);
    int s = getSize(number, type);
    if (s<1000)
        printf("%d B\n", s);
    else if (s >= 1000 && s < 1000000)
        printf("%d KB and %d B\n", s/1000, s%1000);
    else if (s >= 1000000 && s < 1000000000)
    {
        int MB = s/1000000;
        int KB = (s - (MB*1000000))/1000;
        int B = (s - (MB*1000000)) - (KB*1000);
        printf("%d MB and %d KB and %d B\n", MB, KB, B);
    }
    else
        return 1;

}

int getSize(int length, char type)
{
    if (type == 'i')
        return length*(sizeof(int));
    else if (type == 'd')
        return length*(sizeof(double));
    else if (type == 'c')
        return length*(sizeof(char));
    else if (type == 's')
        return length*(sizeof(short));
    else
        return -1;
}