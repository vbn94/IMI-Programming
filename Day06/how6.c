#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    unsigned count1 = 0;
    unsigned count2 = 0;
    unsigned count3 = 0;
    unsigned count4 = 0;
    unsigned count5 = 0;
    unsigned count6 = 0;
    for (int i = 0; i < 100; i++){
        int num = 1 + rand() % 6;
        if (1 == num){
            count1++;
        } else if (2 == num){
            count2++;
        } else if (3 == num){
            count3++;
        } else if (4 == num){
            count4++;
        } else if (5 == num){
            count5++;
        } else {
            count6++;
        }
    }
    printf("1 counts: %u\n", count1);
    printf("6 counts: %u\n", count6);
    return 0;
}