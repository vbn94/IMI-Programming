#include <stdio.h>

#define FORI(start, end, step) for(int i = start; i <=end; i+=step)
#define PRINTNUM(num) printf("%d\n", num)

int main(){
    FORI(10, 100, 5){
        PRINTNUM(i);
    }
    printf("\n");
    return 0;
}