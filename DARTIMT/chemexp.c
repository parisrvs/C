#include <stdio.h>

int main(void)
{
    int min, max, temp;
    scanf("%d%d", &min, &max);
    do
    {
        scanf("%d", &temp);
        if (temp <= max && temp >= min)
            printf("Nothing to report\n");
        else if (temp == -999)
            break;
        else
        {
            printf("Alert!\n");
            break;
        }
    } while (1);
    
}