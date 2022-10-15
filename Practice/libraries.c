//this program explains how to use math library in a C program.
//math.c is the math library.
//all math fonctions are declared in one spot and defined in another spot.

//the <math.h> library contains the definitions of all the basic math functions.
 //these definitions are compiled into binaries and installed in the system in a file called libm.a or libm.so
 //we have to link this binary file to our program, so that we can use the definitions. 
 //definitions for math library functions is usually in /usr/lib or /usr/lib/x86_64-linux-gnu


//the gcc command to compile this file is  - gcc libraries.c -lm -o libraries. Here -l stands for link.
//we can also use the absolute path in place of -lm.
// gcc libraries.c <absolute path to libm.a or libm.so> -o libraries
// gcc libraries.c /usr/lib/x86_64-linux-gnu/libm.so -o libraries // on this system


//the folder that contains all headers/prototypes for dufferent libraries is /usr/include



#include <stdio.h>
#include <math.h>

double square(double a); //also called prototype, declaration, header, signature

int main(void)
{
    double a = 2;
    double aSquared = square(a);
    double power = pow(a,a);
    printf("%.2lf squared is %.2lf\n", a, aSquared);
    printf("%.2lf raised to the power of %.2lf is %.2lf\n", a, a, power);
    return 0;
}

double square(double a) // this is the function definition
{
    return a*a;
}