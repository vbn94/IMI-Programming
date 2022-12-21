#include <stdio.h>

int maxNum(int num1, int num2){
    int max;
    if (num1 > num2){
        max = num1;
    } else {
        max = num2;
    }
    return max;
}

int minNum(int num1, int num2){
    int min;
    if (num1 < num2){
        min = num1;
    } else {
        min = num2;
    }
    return min;
}

double parallelResistance(double R1, double R2){
    double result = R1 * R2 / (R1 + R2);
    return result;
}


int main(){
    double r1 = 4.5;
    double r2 = 5;
    double r12 = parallelResistance(r1, r2);
    printf("R1||R2 = %.2lf\n", r12);
    /*int a = 20;
    int b = 30;
    int m = maxNum(a, b);
    printf("m = %d\n", m);
    m = maxNum(45, 67);
    printf("m = %d\n", m);
    m = maxNum(a, 15);
    printf("m = %d\n", m);
    m = minNum(a, b);
    printf("m = %d\n", m);*/
    return 0;
}