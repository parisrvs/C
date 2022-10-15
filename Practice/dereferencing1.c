#include <stdio.h>

void change(int*);

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("value of a is: %d\n", a);
    change(&a);
    printf("new value of a after adding 1 is: %d\n", a);


}

void change(int* a)
{
    *a = *a +1;
}
