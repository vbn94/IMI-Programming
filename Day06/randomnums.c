#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    unsigned counts[1501];
    for (int i = 0; i < 1501; i++){
        counts[i] = 0;
    }
    for (int i = 0; i < 2000; i++){
        int num = rand() % 1501;
        counts[num]++;
    }
    for (int i = 0; i < 1501; i++){
        printf("%d -> %d\n", i, counts[i]);
    }
    return 0;
}