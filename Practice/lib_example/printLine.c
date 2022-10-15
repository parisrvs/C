#include <stdio.h>

void printLine(char* s)
{
    printf("%s\n", s);
}

//gcc -c printLine.c -o printLine.so
// -c tells the compiler that I only want to compile this file and not built this into an executable code