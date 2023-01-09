#include <stdio.h>
#include "resistance.h"

int main(void){
    double Rs, Rp;
    if(!resistanceCalc(10.2, 10.2, &Rs, &Rp)){
        printf("Rs = %.2lf, Rp = %.2lf\n", Rs, Rp);
    } else {
        printf("Invalid data\n");
    }
    return 0;
}
