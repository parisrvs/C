#include <stdio.h>

int main(void)
{
    char text[68][40];
    for(int c=0; c<68; c++)
        scanf("%s", text[c]);

    printf("\n");

    for(int c=68-1; c>=0; c--)
        printf("%s ", text[c]);
    
    printf("\n");
    

    

}