#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct date
{
    int day;
    int month;
    int year;
};

int* getIntegerArray(int size)
{
    int* array = (int*) malloc((size)*sizeof(int));
    printf("enter %d elements with a space in between them: ", size);
    for (int c=0; c<(size); c++)        
        scanf("%d", array+c);
    return array;
}

void printIntegerArray(int* array, int size)
{
    for(int c=0; c<(size); c++)
        printf("%d ", *(array+c));
    printf("\n");
}

void sortIntegers(int* array, int count)
{
    int temp;
    for(int c=0; c<(count); c++)
        for(int d=c+1; d<(count); d++)
        {
            if (*(array+c) > *(array+d))
            {
                temp = *(array+d);
                *(array+d) = *(array+c);
                *(array+c) = temp;
            }
        }
}

int searchInteger(int* array, int count, int value)
{
    int low = 0, high = count-1, mid;
    while(high >= low)
    {
        mid = (high+low)/2;
        if (*(array+mid) == value)
            return mid; //If the value is found, return the index of the value
        else if (value > *(array+mid))
            low = mid+1;
        else
            high = mid-1;
    }
    return -1; //if the value is not found, return -1
}

int gcd(int a, int b)
{
    int temp;
    while(b != 0)
    {
        temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

void convertBase(int number, int base)
{
    const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int* convertedNumber = NULL;
    int nextDigit, index = 0, size = 1;
    do
    {
        convertedNumber = realloc(convertedNumber, sizeof(int)*size);
        convertedNumber[index] = number%base;
        index++;
        size++;
        number = number/base;
    } while (number != 0);

    index--;
    for(; index>=0; index--)
    {
        nextDigit = convertedNumber[index];
        printf("%c", baseDigits[nextDigit]);
    }
    printf("\n");
    free(convertedNumber);
}

int isLeapYear(int year)
{
    int leap;
    if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )
        leap = 1;
    else
        leap = 0;
    return leap;
}

int numberOfDays(struct date today)
{
    int days;
    const int daysPerMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(isLeapYear(today.year) && today.month == 2)
        days = 29;
    else
        days = daysPerMonth[today.month];
    return days;
}

struct date dateTomorrow(struct date today)
{
    struct date tomorrow;
    if(today.day != numberOfDays(today))
    {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if (today.month == 12)
    {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else
    {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }
    return tomorrow;
}

void incrimentDate(int day, int month, int year, int incriment)
{
    struct date today;
    today.day = day;
    today.month = month;
    today.year = year;
    printf("\nDate You Entered:\nDate: %-5d Month: %-5d Year: %-5d\n", today.day, today.month, today.year);    
    for (int c=0; c < incriment; c++)
        today = dateTomorrow(today);
    printf("Date After %d Days:\nDate: %-5d Month: %-5d Year: %-5d\n",incriment, today.day, today.month, today.year);    
}

char* strip(char* name)
{
    int len = strlen(name), counter = 0;
    char* new_name = NULL;
    for(int c=0; c<len; c++)
    {
        if (name[c] != ' ')
        {
            new_name = (char*) realloc(new_name, sizeof(char)*(counter+2));
            new_name[counter] = name[c];
            new_name[counter+1] = '\0';
            counter++;
        }
        else if (c>0 && name[c-1] != ' ')
        {
            new_name = (char*) realloc(new_name, sizeof(char)*(counter+2));
            new_name[counter] = name[c];
            new_name[counter+1] = '\0';
            counter++;
        }
    }
    free(name);
    len = strlen(new_name);
    if (new_name[len-1] == ' ')
    {
        new_name[len-1] = '\0';
        new_name = (char*) realloc(new_name, sizeof(char)*(len));
    }
    return new_name;
}

void capitalize(char* name)
{
    if (name[0] >= 'a' && name[0] <= 'z')
        name[0] = name[0] - 32;
}

char** readLines(FILE* fptr, int* count)
{
    char** lines = (char**) malloc(sizeof(char*));
    int nlines = 0, c, char_counter = 0;
    *lines = NULL;
    while( (c = getc(fptr)) != EOF )
    {
        do
        {
            if (c == EOF)
                break;
            *(lines+nlines) = (char*) realloc((*(lines+nlines)), sizeof(char)*(char_counter+2));
            lines[nlines][char_counter] = c;
            lines[nlines][char_counter+1] = '\0';
            char_counter ++;                        
        } while ( (c = getc(fptr)) != '\n' );        
        lines = (char**) realloc(lines, sizeof(char*)*(nlines+2));
        nlines++;
        char_counter = 0;
        *(lines+nlines) = NULL;
    }
    *count = nlines;
    return lines;
}