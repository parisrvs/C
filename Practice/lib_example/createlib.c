//here we create three files.
//one file contains the main function
//one file contains the function definition
//one file contains the headers for the functions


#include "../mylib/myio.h"
#include "printLine.h"

int main(void)
{
    char* s = get_string();
    printLine(s);
}

//gcc createlib.c printLine.so -o createlib