#include <stdio.h>

int main(){
    int arr[] = { 2, 8, 10, 12, 15, -4, 5, 0, 10, 30 };
    //int* arr2 = arr + 8;
    int i = 0;
    while ((arr + 1)[i] != 0){
        printf("%d ", (arr + 1)[i]);
        i++;
    } 
    printf("\n");
    return 0;
}