#include <stdio.h>
#include <stdint.h>
#include <windows.h>

int main(){
	uint64_t number1, number2, result;
	printf("Enter first number: ");
	scanf("%llu", &number1);
    printf("Enter second number: ");
	scanf("%llu", &number2);
	result = number1 + number2;
	printf("Sum = %llu\n", result);
	system("pause");
	return 0;
}