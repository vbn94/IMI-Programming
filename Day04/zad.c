#include <stdio.h>
#include <stdint.h>

int main(){
	double U, R1, R2, R3, I, Re;
	char circuit;
	printf("Circuit R1 R2 R3 U: ");
	scanf("%c %lf %lf %lf %lf", &circuit, &R1, &R2, &R3, &U);
	if ('A' == curcuit || 'a' == curcuit){
		Re = R1 + R2 + R3;
	} else if ('B' == curcuit || 'b' == curcuit){
		double R12 = R1 * R2 / (R1 + R2);
		Re = R12 * R3 / (R12 + R3);
	} else if ('C' == curcuit || 'c' == curcuit){
		Re = R1 + R2 * R3 / (R2 + R3);
	} else {
		printf("Invalid circuit!\n");
		return 1;
	}
	I = U / Re;
	printf("I = %.3lf A\n", I);
	return 0;
}