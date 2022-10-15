#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */

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

struct date advanceDay(struct date d)
{
    if (d.month == 2 && (d.day == 28 || d.day == 29))
    {
        d.month = 3;
        d.day = 1;
    }
    else if (d.month == 12 && d.day == 31)
    {
        d.day = 1;
        d.month = 1;
        d.year = d.year + 1;        
    }
    else if ((d.month == 1 || d.month == 3 || d.month == 5 || d.month == 7 || d.month == 8 || d.month == 10) && d.day == 31)
    {
        d.day = 1;
        d.month = d.month + 1;
    }
    else if ((d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11) && d.day == 30)
    {
        d.day = 1;
        d.month = d.month + 1;
    }
    else
        d.day = d.day + 1;

    return d;
}