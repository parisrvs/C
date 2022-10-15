#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int c=0, l=strlen(*(argv+1)); c<l; c++)
        if (*(*(argv+1)+c) < '0' || *(*(argv+1)+c) > '9')
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    int key = atoi(*(argv+1));
    if (key > 26)
        key = key%26;
    char* plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int c=0, l=strlen(plaintext); c<l; c++)
        if (*(plaintext+c) >= 'a' && *(plaintext+c) <= 'z')
            if( *(plaintext+c) + key > 'z' )
                printf("%c", *(plaintext+c) + (key-26) );
            else
                printf("%c", *(plaintext+c) + (key) );
        else if (*(plaintext+c) >= 'A' && *(plaintext+c) <= 'Z')
            if( *(plaintext+c) + key > 'Z' )
                printf("%c", *(plaintext+c) + (key-26) );
            else
                printf("%c", *(plaintext+c) + (key) );
        else
            printf("%c", *(plaintext+c));

    printf("\n");
}