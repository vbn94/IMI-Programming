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

int mystrlen(char *str){
    int count = 0;
    while (str[count] != '\0'){
        count++;
    }
    return count;
}

int main(){
    int n = maxNum(15155555115);
    int m = maxNum(5, 6);
    printf("N = %d\n", n);
    printf("String len = %d\n", mystrlen("IMI Bulgaria"));
    return 0;
}