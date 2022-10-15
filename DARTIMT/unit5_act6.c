#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    int verticies;
    scanf("%d", &verticies);
    struct point* ptr = malloc(sizeof(struct point)*verticies);
    initializePoly(ptr, verticies);
    printPoly(ptr, verticies);

}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here
void initializePoly(struct point * ptr, int verticies)
{
    int i;
    for (i=0; i<verticies; i++)
    {
        ptr[i].x = i*(-1);
        ptr[i].y = i*i;
    }
}
