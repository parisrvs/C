//void sortIntegers(array, size;
void sortIntegers(int*, int);

//int searchInteger(array, size, value to be searched)
int searchInteger(int*, int count, int value);

//int gcd(value1, value2);
int gcd(int, int);

//arrayPointer getIntegerArray(size of the array);
int* getIntegerArray(int);

//void printIntegerArray(array, size);
void printIntegerArray(int*, int);

//void convertBase(num, base);
void convertBase(int, int);

//incrimentDate(day, month, year, incriment);
void incrimentDate(int, int, int, int);

//calculates tomorrow's date
struct date dateTomorrow(struct date);

//find the number of days in a month
int numberOfDays(struct date);

//returns 1 if the year is a leap year, else 0
int isLeapYear(int);

char* strip(char*);

void capitalize(char* name);

//count is the variable where the number of lines will be stored.
char** readLines(FILE* fptr, int* count); //function uses malloc, hence needs to be freed.