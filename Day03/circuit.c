#include <stdio.h>

int main(){
	int a, b, c;
	printf("a b c: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a && (b || c)){
		printf("Lamp is ON!\n");
	} else {
		printf("Lamp is OFF!\n");
	}
	return 0;
}