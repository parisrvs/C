#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    if (argc == 1)
    {
        printf("no command line arguments\n");
        return 1;
    }
    int l;
    for(int c=0; c<argc; c++)
    {
        //printf("%s\n", *(argv+c));
        l = strlen(*(argv+c));
        for(int d=0; d<l; d++)
            printf("%c ", *(*(argv+c)+d));
        printf("\n");
    }
}