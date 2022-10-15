#include <stdio.h>

int main(void)
{
    int sunny;
    scanf("%d", &sunny);
    int notSunny = !sunny;
    if (notSunny)
        printf("sunny: %d and not sunny: %d\n", sunny, notSunny);
    else
        printf("sunny: %d and not sunny: %d\n", sunny, notSunny);

    sunny = 0;
    int vacation = 0;
    int NOTsunnyANDNOTvacation = !sunny && !vacation;
    if (NOTsunnyANDNOTvacation)
    {
        printf("sunny: %d and vacation: %d\n", sunny, vacation);
        printf("it is neither sunny and nor am I on vacation\n");
    }        
    else
        printf("hello, world!\n");
    
}