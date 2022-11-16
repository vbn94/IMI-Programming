#include <stdio.h>
#include <stdint.h>

int main(){
	short num1;
	int num2;
	long num3;
	long long num4;
	unsigned short num5;
	unsigned num6;   // unsigned == unsigned int
	unsigned long num8;
	unsigned long long num9;
	int8_t num10;
	int16_t num11;
	int32_t num12;
	int64_t num13;
	uint8_t num14;
	uint16_t num15;
	uint32_t num16;
	uint64_t num17;
    printf("Size of int: %lu Bytes\n", sizeof(int));
    printf("Size of long long: %lu Bytes\n", sizeof(long long));
    printf("Size of num15: %lu Bytes\n", sizeof(num15));	
	return 0;
}