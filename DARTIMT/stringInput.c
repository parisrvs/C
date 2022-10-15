#include <stdio.h>

int main(void)
{
    int c;
    char word[101];
    scanf("%d %s", &c, word);
    for(int d=0; d<c; d++)
        printf("%s\n", word);
}

