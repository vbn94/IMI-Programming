#include <stdio.h>


int main(){
   // unsigned counts[1501];
   // counts[0] = 50;
   /* int num = 20;
    int *ptr;
    ptr = &num;
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    double pi = 3.14;
    double* piPtr;
    piPtr = &pi;
    printf("%p\n", piPtr);
    printf("%lf\n", *piPtr);
    
    printf("%p\n", nums);
    printf("%d\n", *nums); */
    short * p1 = 4llu;
    printf("%lu\n", (long unsigned)p1);
    p1 += 10;
    printf("%lu\n", (long unsigned)p1);
    int nums[] = { 10, 20, 30, 40 };
    printf("%d\n", *(nums + 2));
    printf("%lu\n", sizeof(p1));
    return 0;
}