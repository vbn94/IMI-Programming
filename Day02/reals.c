#include <stdio.h>

int main(){
	float pi = 9000000000.21f;
	printf("PI = %.20f\n", pi);
	double n = 9000000000.21;
	printf("n = %.10lf\n", n);
	printf("size of float %lu\n", sizeof(float));
	printf("size of double %lu\n", sizeof(double));
	return 0; 
}