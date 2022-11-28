#include <stdio.h>
#include <math.h>

int main(){
	float a = 1.2f;
	float b = 0.0f;
	for (int i = 0; i < 11; i++){
		b += 0.1f;
	}
	printf("a = %.15f, b = %.15f\n", a, b);
	if (fabs(a - b) < 0.01){
		printf("Equals\n");
	} else {
		printf("Not equals\n");
	}
	return 0;
}