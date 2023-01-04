#include <stdio.h>
#include <stdint.h>
#include "bitwise.h"

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