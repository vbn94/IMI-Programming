#include <stdio.h>

int main(){
	int num = 20;
	num = num + 1;
	printf("%d\n", num);  // 21
	num += 1;
	printf("%d\n", num); // 22
	num -= 10;
	printf("%d\n", num); // 12
	num *= 2;
	printf("%d\n", num); // 24
	num++;
	printf("%d\n", num); // 25
	++num;
	printf("%d\n", num); // 26
	num--;
	printf("%d\n", num); // 25
	char sym = 'C';
	sym++;
	printf("%c\n", sym);
	return 0;
}