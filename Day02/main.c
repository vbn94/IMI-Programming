#include <stdio.h>

int add(int a, int b);

int main(){
	int num1, num2, result;
	num1 = 30;
	num2 = 20;
	result = add(num1, num2);
	printf("Result = %d\n", result);
	return 0;
}