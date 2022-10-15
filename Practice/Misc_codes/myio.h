#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* get_string()
{
    char* s = NULL;
    char c;
    int count = 1;
    while(1)
    {   c = getchar();
        if (c == '\n')
            break;
        s = (char*) realloc(s, (sizeof(char)*count)+1);
        s[count-1] = c;
        s[count] = '\0';
        count++;
    }
    if (s==NULL)
        return get_string();
    else
        return s;
}


int check_int(char* s)
{
    int c = 0;
    int len = strlen(s);
    if (*(s+c) == '-' || *(s+c) == '+')
        c = 1;
    for(; c<len; c++)
        if ((int) (*(s+c)) < 48 || (int) (*(s+c)) > 57)
            return 0;
    if (len == 1 && ((int) (*(s)) < 48 || (int) (*(s)) > 57))
        return 0;
    return 1;
}

long long int power(int a, int b)
{
    a = (int) a;
    b = (int) b;
    long long int number = 1;
    for(int c=0; c<b; c++)
        number = number*a;
    return number;
}

int string2int(char* s)
{
    int number = 0, temp, conv;
    int len = strlen(s);
    int p = 0, sign = 0;
    if (*s == '-' || *s == '+')
        sign = 1;
    for (int c=len-1; c>=sign; c--)
    {
        conv = ((int) (*(s+c))) - 48;
        temp = conv*(power(10,p));
        number = number + temp;
        p++;
    }
    if (*s == '-')
        return (number*(-1));
    else
        return number;
}

int get_int()
{
    char* s = get_string();
    if (!check_int(s))
    {
        free(s);
        return get_int();
    }
    int c = string2int(s);
    free(s);
    return c;
}


char get_char()
{
    char* s = get_string();
    if (strlen(s) != 1)
    {
        free(s);
        return get_char();
    }
    char c = *s;
    free(s);
    return c;
}

int check_double(char* s)
{
    int c = 0, dotcounter = 0;
    int len = strlen(s);
    if (*(s+c) == '-' || *(s+c) == '+')
        c = 1;
    for(int x=0; x<len; x++)
    {
        if (*(s+x) == '.')
            dotcounter++;
        if (dotcounter > 1)
            return 0;
    }
    if (*(s+len-1) == '.')
        return 0;
    for(; c<len; c++)
        if (((int) (*(s+c)) < 48 || (int) (*(s+c)) > 57) && (*(s+c)) != '.')
            return 0;
    if (len == 1 && ((int) (*(s)) < 48 || (int) (*(s)) > 57))
        return 0;
    return 1;
}

long long int string2longint(char* s)
{
    long long int number = 0, temp, conv, p = 0;
    int len = strlen(s);
    int sign = 0;
    if (*s == '-' || *s == '+')
        sign = 1;
    for (int c=len-1; c>=sign; c--)
    {
        conv = ((int) (*(s+c))) - 48;
        temp = conv*(power(10,p));
        number = number + temp;
        p++;
    }
    return number;
}

long long int get_integer_part(char* s)
{
    if (*s == '.')
        return 0;

    char* integer = NULL;
    int len = strlen(s), counter=2;
    for(int c=0; c<len; c++)
    {
        if ((*(s+c)) != '.')
        {
            integer = (char*) realloc(integer, sizeof(char)*counter);
            *(integer+c) = *(s+c);
            *(integer+c+1) = '\0';
            counter++;
        }
        else
            break;
    }

    long long int number = string2longint(integer);
    free(integer);    
    return number;
}

double string2decimal(char* s)
{
    double len = strlen(s), number = 0, temp, conv;
    for(int c=0; c<len; c++)
    {
        conv = ((int) (*(s+c))) - 48;
        temp = conv*(1.0/(power(10,c+1)));
        number = number + temp;
    }
    return number;
}


double get_decimal_part(char* s)
{
    int c, len = strlen(s), counter = 2, counter1 = 0;
    for (c=0; c<len; c++)
        if ((*(s+c)) == '.')
            break;
    if (c == len)
        return 0;
    char* decimal = NULL;
    for (int d=c+1; d<len; d++)
    {
        decimal = (char*) realloc(decimal, sizeof(char)*counter);
        *(decimal+counter1) = *(s+d);
        *(decimal+counter1+1) = '\0';
        counter++;
        counter1++;
    }

    double number = string2decimal(decimal);
    free(decimal);
    return number;
}

double string2double(char* s)
{
    //printf("%lld\n", get_integer_part(s));
    //printf("%lf\n", get_decimal_part(s));
    double number = get_integer_part(s) + get_decimal_part(s);
    if (*s == '-')
        number = number*(-1);
    return number;
}


double get_double()
{
    double c = 0;
    char* s = get_string();
    if (!check_double(s))
    {
        free(s);
        return get_double();
    }
    c = string2double(s);
    free(s);
    return c;
}