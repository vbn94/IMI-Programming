#include <stdio.h>

int main(){
	int n = -1;
	printf("Enter number: ");
	scanf("%d", &n);
//	printf("%d\n", n);
	printf("OCT: %o\n", n); 
	printf("HEX: %x\n", n);
	return 0; 
}