#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   srand(time(NULL));
   int numbers[10];
   for (int i = 0; i < 10; i++){
    numbers[i] = rand() % 10;
   }
   for (int i = 0; i < 10; i++){
    printf("%d ", numbers[i]);
   }
   printf("\n");
   return 0;
}