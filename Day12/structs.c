#include <stdio.h>

struct point {
    int x;
    int y;
};

struct LED {
    unsigned power;
    double Uf;
    unsigned current;
    unsigned lamdba;
};

typedef unsigned liters;
typedef unsigned long distance;
typedef struct LED LED;
typedef struct point point;

int main(){
    liters bottle1, bottle2;
    bottle1 = 20;
    bottle2 = 50;
    distance btgpz; 
    btgpz = 12;
    LED myled;


    LED led1, led2, led3;
    LED * ledPtr;
    ledPtr = &led1;
    led1.Uf = 2.4;
    led1.lamdba = 400;
    led1.power = 1;
    LED myLeds[100];
    myLeds[0].Uf = 10;
    myLeds[1].current = 200;
    point p1, p2;
    p1.x = 20;
    p1.y = 10;
    p2.x = 56;
    p2.y = 89;
    printf("A(%d, %d)\n", p1.x, p1.y);
    printf("B(%d, %d)\n", p2.x, p2.y);
    return 0;
}