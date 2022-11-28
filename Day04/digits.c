#include <stdio.h>
#include <stdint.h>

int main(){
	uint64_t num;
	scanf("%llu", &num);
	if (num < 10){
		printf("1 digit\n");
	} else if (num < 100) {
		printf("2 digits\n");
	} else if (num < 1000) {
		printf("3 digits\n");
	} else {
		printf("many digits\n");
	}
	return 0;
}