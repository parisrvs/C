#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");
    int len = strlen(text);
    int letters = 0, words = 1, sentences = 0;
    for (int c=0; c<len; c++)
    {
        if ((text[c] >= 'a' && text[c] <= 'z') || (text[c] >= 'A' && text[c] <= 'Z'))
            letters++;
        if (text[c] == ' ')
            words++;
        if (text[c] == '.' || text[c] == '!' || text[c] == '?')
            sentences++;
    }
    float l = ((float)letters/(float)words)*100.00;
    float s = ((float)sentences/(float)words)*100.00;
    float index = (0.0588 * l) - (0.296 * s) - 15.8;
    index = roundf(index);
    int grade = (int) index;
    if (grade >= 16)
        printf("Grade 16+\n");
    else if (grade < 1)
        printf("Before Grade 1\n");
    else
        printf("Grade %d\n", grade);
}