#include <stdio.h>

int main(void)
{
    char word[51];
    scanf("%s", word);
    int l=0, counter=0;
    char temp;
    while(word[l] != '\0')
        l++;   
    
    for (int c=0; c<l-1; c++)
    {
        for(int d=0; d<l-1; d++)
        {
            if (word[d] > word[d+1])
            {
                temp = word[d];
                word[d] = word[d+1];
                word[d+1] = temp;                
            }
        }
    }
    int low = 0;
    while(low<l)
    {
        if ((word[low] == word[low+1]) && word[low+1] != word[low+2])
            counter++;
        low++;
    }
    
    printf("%d\n", counter);
        

}