#include <stdio.h>

int main(void)
{
    printf("Size of a character is: %zu byte(s).\n", sizeof(char));
    printf("Size of an integer is: %zu bytes.\n", sizeof(int));
    printf("Size of a floating point number (double precision) is: %zu bytes.\n", sizeof(double));

    int arr[5];
    char arr1[5];
    double arr2[5];

    printf("Size of an integer array of 5 elements is: %zu bytes.\n", sizeof(arr));
    printf("Size of a character array of 5 elements is: %zu bytes.\n", sizeof(arr1));
    printf("Size of an array of 5 floating point numbers (dp) is:  %zu bytes.\n", sizeof(arr2));





} 