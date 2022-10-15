#include <stdio.h>

int main(void)
{
    char word[51];
    scanf("%s", word);
    int l=0, value = -1;

    while(word[l] != '\0')
        l++;
    if (l%2 != 0)
        l++;
    for (int c=0; c<l/2; c++)
        if (word[c] == 't' || word[c] == 'T')
        {
            value = 1;
            break;
        }
            
    if (value == -1)
        for(int c=l/2; c<l; c++)
            if (word[c] == 't' || word[c] == 'T')
            {
                value = 2;
                break;
            }
    printf("%d\n", value);
                

        
}