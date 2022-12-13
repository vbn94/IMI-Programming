#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    unsigned count = 0;
    for (int i = 0; i < 100; i++){
        count += (6 == (1 + rand() % 6));
        /*int num = 1 + rand() % 6;
        if (6 == num){
            count++;
        }*/
    }
    printf("6 counts: %u\n", count);
    return 0;
}