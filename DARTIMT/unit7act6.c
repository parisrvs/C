#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    if (argc != 3)
        printf("Invalid Input\n");
    else
    {
        int count = atoi(*(argv+1));
        double price = atof(*(argv+2));
        double total = count*price;

        printf("%d plants for %.2lf dollars each cost %.2lf dollars.\n", count, price, total);
    }
}