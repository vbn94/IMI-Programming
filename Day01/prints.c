#include <stdio.h>

int main(){
	printf("a\nb\nc\nd\n");  // \n -> new line
	printf("Hello\tIMI\n"); // \t -> tabulation
	printf("\\ \n");    // this prints '\'
	printf("hello\rabc");  // \r -> carriage return
 	return 0;
}