#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if (strlen(argv[1]) != 26)
    {
        printf("Invalid Key\n");
        return 1;
    }
    int count[26];
    int x;
    for(int c=0; c<26; c++)
        count[c] = 0;
    for(int c=0, l=strlen(argv[1]); c<l; c++)
    {
        if (!(isalpha(*((*(argv+1))+c))))
        {
            printf("Only alphabets are allowed in the key\n");
            return 1;
        }
        if (*((*(argv+1))+c) >= 'a' && *((*(argv+1))+c) <= 'z')
        {
            x = *((*(argv+1))+c) - 97;
            count[x]++;
        }
        else if (*((*(argv+1))+c) >= 'A' && *((*(argv+1))+c) <= 'Z')
        {
            x = *((*(argv+1))+c) - 65;
            count[x]++;
        }
    }
    for(int c=0; c<26; c++)
        if (count[c] != 1)
        {
            printf("Duplicate Alphabets in the key.\n");
            return 1;
        }

    char* plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    for(int c=0, l=strlen(plaintext); c<l; c++)
    {
        if (*(plaintext+c) >= 'a' && *(plaintext+c) <= 'z')
        {
            x = *(plaintext+c) - 97;
            printf("%c", tolower(argv[1][x]));
        }
        else if (*(plaintext+c) >= 'A' && *(plaintext+c) <= 'Z')
        {
            x = *(plaintext+c) - 65;
            printf("%c", toupper(argv[1][x]));
        }
        else
            printf("%c", plaintext[c]);
    }
    printf("\n");
}