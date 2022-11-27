#include <stdio.h>

int main(){
	int num1, num2;
	num1 = 20;
	num2 = 55;
	printf("Num1 = %d, Num2 = %d\n", num1, num2);
	int temp = num1;
	num1 = num2;
	num2 = temp;
	printf("Num1 = %d, Num2 = %d\n", num1, num2);
	return 0;
}