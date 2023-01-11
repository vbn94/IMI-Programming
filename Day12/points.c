#include <stdio.h>

typedef struct {
    char name;
    int x;
    int y;
} point_t;

void printPoint(point_t point){
    printf("%c(%d, %d)\n", point.name, point.x, point.y);
}

int main(){
    point_t p1, p2;
    p1.name = 'A';
    p1.x = 20;
    p1.y = 10;
    p2.name = 'B';
    p2.x = 8;
    p2.y = 6;
    point_t p3 = { .name = 'C', .x = 8, .y = 4 };
    printPoint(p1);
    printPoint(p2);
    printPoint(p3);
    point_t* ptr = &p3;
    printf("%c\n", (*ptr).name);
    printf("%c\n", ptr->name); 
    return 0;
}