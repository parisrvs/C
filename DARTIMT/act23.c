#include <stdio.h>

int main(void)
{
    int matches, sizeBox;
    scanf("%d%d", &matches, &sizeBox);
    printf("%d\n%d\n", matches/sizeBox, matches%sizeBox);
}