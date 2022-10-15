#include <stdio.h>
#include <stdlib.h>

int main(void)
{    
    char* text = malloc(sizeof(char)*(5+1));
    scanf("%5s", text);
    char* t = malloc(sizeof(char));
    *t = 'c';
    printf("%c\n", *t);
    printf("%s\n", text);
    free(t);
    free(text);
}

