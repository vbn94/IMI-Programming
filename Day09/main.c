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
    if (num1 < num2){
        return num1;
    }
    return num2;
}

double parallelResistance(double R1, double R2){
    double result = R1 * R2 / (R1 + R2);
    return result;
}

double parallelResistance3(double R1, double R2, double R3){
    double r12 = parallelResistance(R1, R2);
    double r123 = parallelResistance(r12, R3);
    return r123;
}

char oddeven(int num){
    char ch;
    if (num % 2 == 0){
        ch = 'e';
    } else {
        ch = 'o';
    }
    return ch;
}

void printNumber(int num){
    printf("Num = %d\n", num);
}

void driveHead(int dir){
    if (0 == dir){
        printf("Drive head DOWN!\n");
    } else if (1 == dir){
        printf("Drive head UP!\n");
    }
}

int getNumber(){
    return 567;
    return 15;
    return 56;
}

int main(void){
    //driveHead(0);
   // driveHead(1);
    //driveHead(1);
    //driveHead(0);
    printf("%d\n", getNumber());
    /*
    printNumber(23);
    printNumber(3456);
    printf("%c\n", oddeven(10)); // e
    printf("%c\n", oddeven(15)); // o
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