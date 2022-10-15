#include <stdio.h>

void elixir(int*); //Write your function prototype here

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	elixir(ageAddr); //Write your function call here

	printf("Your new age will be %d!\n", age);
	return 0;
}


//Write your function here
void elixir(int* ageAddr)
{
    if (*ageAddr <= 21)
        *ageAddr = *ageAddr*2;
    else
        *ageAddr = *ageAddr - 10;
}