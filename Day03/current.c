#include <stdio.h>

int main(){
	double current, resistance, voltage;
	printf("Enter voltage: ");
	scanf("%lf", &voltage);
	printf("Enter resistance: ");
	scanf("%lf", &resistance);
	current = voltage / resistance;
	printf("Current = %.3lf A\n", current);
	if (current >= 10.0){
		printf("Current is over 10A.\n");
	} else {
		printf("Current is under 10A.\n");
	}
	return 0;
}