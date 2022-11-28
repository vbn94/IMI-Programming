#include <stdio.h>

int main(){
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if (((a && b && c) || d) && !e){
		printf("Lamp is ON\n");
	} else {
		printf("Lamp is OFF\n");
	}
	return 0;
}