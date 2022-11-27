#include <stdio.h>

int main(){
	double U;
	printf("Enter voltage: ");
	scanf("%lf", &U);
	if (U >= 8.0 && U <= 12.0){
		printf("OK!");
	} else {
		printf("NOK!");
	}
	return 0;
}