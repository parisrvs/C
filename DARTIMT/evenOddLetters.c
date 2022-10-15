#include <stdio.h>

int main(void)
{
    char name[50];
    scanf("%s", name);
    int l=0;
    while(name[l] != '\0')
        l++;
    if (l%2 == 0)
        printf("%d\n", 1);
    else
        printf("%d\n", 2);
}