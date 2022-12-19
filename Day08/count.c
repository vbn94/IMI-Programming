#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "IMIZ 0 Z BulgariaZzzzzz";
    int count = 0;
    int n = 0;
    while (*(str + n)){
        if ('Z' == *(str + n) || 'z' == *(str + n)){
            count++;
        }
        n++;
    }
    printf("Count = %d\n", count);
    return 0;
}