#include <stdio.h>

#include <stdio.h>

int main(){
	int U;
	printf("Enter voltage: ");
	scanf("%d", &U);
	if ((5 == U) || (12 == U) || (15 == U)){
		printf("OK!");
	} else {
		printf("NOK!");
	}
	return 0;
}