#include <stdio.h>
#include <stdint.h>

int checkBit(uint64_t mask, int bit){
    return !!(mask & (1ULL << bit));
}

void setBit(uint64_t* mask, int bit){
    *mask |= (1ULL << bit);
}

void clearBit(uint64_t* mask, int bit){
    *mask &= ~(1ULL << bit);
}

void toggleBit(uint64_t* mask, int bit){
    *mask ^= (1ULL << bit);
}

void printMask(uint64_t mask){
    for (int i = 63; i >= 0; i--){
        printf("%d", checkBit(mask, i));
    }
    printf("\n");
}

int main(){
    uint64_t mask = 0;
    setBit(&mask, 1);
    setBit(&mask, 4);
    setBit(&mask, 7);
    clearBit(&mask, 4);
    toggleBit(&mask, 10);
    printMask(mask);
    return 0;
}