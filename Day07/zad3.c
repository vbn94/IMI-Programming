#include <stdio.h>

int main(){
    double voltage;
    double res[] = { 10, 8, 67.5, 100.2, 345.4, 34.2, 99, 10.2 };
    double currents[8];
    printf("Enter voltage: ");
    scanf("%lf", &voltage);
    for (int i = 0; i < 8; i++){
        currents[i] = voltage / res[i];
    }
    for (int i = 0; i < 8; i++){
        printf("I%d = %.2lfA\n", i + 1, currents[i]);
    }
    return 0;
}