#include <stdio.h>

int main(void)
{
    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);

    int a,b,c;
    printf("enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("First Number is %d\nSecond Number is %d\nThird NUmber is %d\n", a,b,c);
    //when reading numbers, scanf ignores white spaces

    int d,e,f;
    printf("enter three numbers, separated by a comma: ");
    scanf("%d,%d,%d", &d, &e, &f);
    printf("First Number is %d\nSecond Number is %d\nThird NUmber is %d\n", d,e,f);
    //when reading numbers, scanf ignores white spaces
}