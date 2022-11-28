#include <stdio.h>

int main(){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a && ((b&&c) || d)){
		printf("Lamp is ON\n");
	} else {
		printf("Lamp is OFF\n");
	}
	return 0;
}