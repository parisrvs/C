#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

void readDate(struct date * d)
{
    scanf("%d", &((*d).year));
    scanf("%d", &((*d).month));
    scanf("%d", &((*d).day));
}

void printDate(struct date d)
{
    if (d.year < 100)
        d.year = d.year + 2000;
    printf("%.2d/%.2d/%4d\n", d.month, d.day, d.year );
}