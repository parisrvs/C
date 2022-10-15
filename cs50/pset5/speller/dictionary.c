// Implements a dictionary's functionality
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "dictionary.h"


// Represents a node in a hash table
typedef struct node
{
    char* word;
    struct node *next;
}
node;

// Number of buckets in hash table
const unsigned int N = 26;
int word_count = 0; //total words in the dictionary


// Hash table
node *table[N];

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    int l = strlen(word);
    char new_word[l+1];
    for(int c=0; c<=l; c++)
        if (word[c] == '\0')
            new_word[c] = '\0';
        else if (word[c] >= 'A' && word[c] <= 'Z')
            new_word[c] = (char) tolower(word[c]);
        else
            new_word[c] = word[c];


    int index = hash(new_word);
    node* ptr = table[index];
    while (ptr != NULL)
    {
        if( strcmp((*ptr).word, new_word) == 0 )
            return true;
        else if ( strcmp((*ptr).word, new_word) < 0 )
            break;
        ptr = (*ptr).next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    char c = word[0] - 'a';
    return (int) c;
}

//appends node into the hash table
bool append_node(char* word)
{
    int index = hash(word);
    if (table[index] == NULL)
    {
        table[index] = (node*) malloc(sizeof(node));
        if (table[index] == NULL)
            return false;
        (*table[index]).word = word;
        (*table[index]).next = NULL;
        return true;

    }
    node* ptr = (node*) malloc(sizeof(node));
    if (ptr == NULL)
        return false;
    (*ptr).word = word;
    (*ptr).next = table[index];
    table[index] = ptr;
    return true;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    for(int c=0; c<26; c++)
        table[c] = NULL;

    FILE* file = fopen(dictionary, "r");
    if (file == NULL)
        return false;
    char* word = NULL;
    int c, letter_count = 0;
    while ( (c=fgetc(file)) != EOF)
    {
        if ((char) c == '\n')
        {
            if (!(append_node(word)))
                return false;
            word = NULL;
            letter_count = 0;
            word_count++;
        }
        else
        {
            word = (char*) realloc(word, sizeof(char)*(letter_count+2));
            if (word == NULL)
                return false;
            word[letter_count] = (char) c;
            word[letter_count+1] = '\0';
            letter_count++;
        }
    }
    fclose(file);
    return true;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    return word_count;
}


//free all linked lists stored inside the hash table
void free_node(node* nodeptr)
{
    node* nodeptr2;
    while(nodeptr != (node*) 0)
    {
        nodeptr2 = (*nodeptr).next;
        free((*nodeptr).word);
        free(nodeptr);
        nodeptr = nodeptr2;
    }
}


// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    for(int c=0; c<26; c++)
        free_node(table[c]);
    return true;

}