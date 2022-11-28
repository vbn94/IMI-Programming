#include <stdio.h>

int main(){
	int a, b, c, d;
	scanf("%d %d %d %d %d", &a, &b, &c, &d);
	if (a && b && !(c || d)){
		printf("Tester is ON\n");
	} else {
		printf("Tester is OFF\n");
	}
	return 0;
}