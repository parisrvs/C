#include <stdio.h>
int main(void)
{
    char name[100];
    scanf("%s", name);
    int length = -1;
    do
    {
        length++;
    } while (name[length] != '\0');
    printf("%d\n", length);


    
}