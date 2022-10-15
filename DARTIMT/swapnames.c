#include <stdio.h>

int main(void)
{
    int count;
    scanf("%d", &count);
    char firstName[101];
    char lastName[101];
    for (int c=0; c<count; c++)
    {
        scanf("%s %s", firstName, lastName);
        printf("%s %s\n", lastName, firstName);
    }
}