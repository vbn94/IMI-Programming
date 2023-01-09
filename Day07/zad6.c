#include <stdio.h>

int main(){
    /*double arr[10];
    for (int i = 0; i < 10; i++){
        printf("%llu\n", arr + i);
    }*/
    int arr1[7] = { 10, 20, 30, 40, 50, 60, 70 };
    int arr2[7] = { 19, 29, 39, 4, 5, 6, 7 };
    for (int i = 0; i < 12; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");
    return 0;
}