#include <stdio.h>

int main(){
    int arr[] = { 20, 30, 40, 50 };
    int *p = arr;
    p[1] = 99;
    for (int i = 0; i < 4; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++){
        printf("%d ", p[i]);
    }
    printf("\n");
    return 0;
}