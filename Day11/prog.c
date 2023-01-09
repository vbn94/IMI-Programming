#include <stdio.h>

#define FORI(start, end, step) for(int i = start; i <=end; i+=step)
#define PRINTNUM(num) printf("%d\n", num)
#define CHECKBIT(mask, bit) !!((mask) & (1 << (bit)))
#define SETBIT(mask, bit) mask |= (1 << (bit))
#define CLEARBIT(mask, bit) mask &= ~(1 << (bit))
#define TOGGLEBIT(mask, bit) mask ^= (1 << (bit))

void printBits(int mask){
    for (int i = 31; i >= 0; i--){
        printf("%d", CHECKBIT(mask, i));
    }
    printf("\n");
}

int main(){
    int m = 0;
    SETBIT(m, 3);
    SETBIT(m, 0);
    SETBIT(m, 10);
    SETBIT(m, 21);
    printBits(m);
    return 0;
}