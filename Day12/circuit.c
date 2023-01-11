#include <stdio.h>
#include <stdint.h>
#define CHECKBIT(mask, bit) !!((mask) & (1 << (bit)))

double calculateCurrent(uint8_t switches){
    if (CHECKBIT(switches, 0) == 0){
        return 0.0; // open circuit
    }
    if (CHECKBIT(switches, 5) && CHECKBIT(switches, 6) && CHECKBIT(switches, 7)){
        return -1; // short circuit
    }
    if (CHECKBIT(switches, 1) && CHECKBIT(switches, 2) && CHECKBIT(switches, 3) && CHECKBIT(switches, 4) && CHECKBIT(switches, 5)){
        return -1; // short circuit
    }
    int resistance = 0;
    if (CHECKBIT(switches, 6) && CHECKBIT(switches, 7) && !CHECKBIT(switches, 5)){
        resistance = 100;
    } else {
        int count = 0;
        count += !CHECKBIT(switches, 1);
        count += !CHECKBIT(switches, 2);
        count += !CHECKBIT(switches, 3);
        count += !CHECKBIT(switches, 4);
        count += !CHECKBIT(switches, 5);
        resistance = 100 * count;
    }
    return 5000.0 / resistance;
}

int main(){
    uint8_t m = 0b11100001;
    printf("%.2lf\n", calculateCurrent(m));
    return 0;
}