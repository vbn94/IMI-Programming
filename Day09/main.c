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


void setZero(int* num){
    *num = 0;
}

void swap(int* num1, int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(void){
    int a = 10, b = 20;
    swap(&a, &b);
    printf("a = %d, b = %d\n",a, b);
    /*int num = 345565;
    setZero(&num);
    printf("n = %d\n", num);*/
    return 0;
}