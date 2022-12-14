#include <stdio.h>


int main(){
    int voltages[] = { 100, 99, 91, 91, 91, 91, 567, -34, 96, 97, 101, 56, 100, 456 };
    int n = sizeof(voltages) / sizeof(voltages[0]);
    int sum = 0;
    int valids = 0;
    for (int i = 0; i < n; i++){
        if (voltages[i] >= 90 && voltages[i] <= 110){
            sum += voltages[i];
            valids++;
        }
    }
    double avegrageVoltage = (double)sum / valids;
    printf("Average voltage = %.2lf V\n", avegrageVoltage);
    if (avegrageVoltage >= 99 && avegrageVoltage <= 101) {
        printf("OK\n");
    } else {
        printf("NOK\n");
    }
    return 0;
}