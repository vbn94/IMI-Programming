#include <stdio.h>
// #include <math.h>

int main(){
	double PI = 3.1415;
	double C, f, Xc;
	printf("Enter C[uF]: ");
	scanf("%lf", &C);
	printf("Enter f[Hz]: ");
	scanf("%lf", &f);
	Xc = 1e6 / (2 * PI * f * C);
	printf("Xc = %.2lf Ohms\n", Xc);
	return 0;
}