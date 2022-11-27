#include <stdio.h>

int main(){
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	if (0 == num){
		printf("Number is zero!\n");
	} else {
		printf("Number is not zero!\n");
	}
	return 0;
}