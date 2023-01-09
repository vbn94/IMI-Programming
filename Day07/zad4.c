#include <stdio.h>

int main(){
    int nums[4];
    for (int i = 0; i < 4; i++){
        scanf("%d", nums + i);
    }
    for (int i = 0; i < 4; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++){
        printf("%d ", *(nums + i));
    }
    printf("\n");
    for (int i = 0; i < 4; i++){
        printf("%d ", i[nums]);
    }
    printf("\n");
    return 0;
}