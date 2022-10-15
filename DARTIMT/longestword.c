#include <stdio.h>

int main(void)
{
    int count;
    scanf("%d", &count);
    int result = 0;
    for (int c=0; c<count; c++)
    {
        char word[100];
        int c = 0;
        scanf("%s", word);
        while(word[c] != '\0')
            c++;
        if (result < c)
            result = c;
    }
    printf("%d\n", result);
}