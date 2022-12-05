#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 0; i <= 10; i++){
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 10; i <= 30; i++){
        printf("%d ", i);
    }
     printf("\n");
    for (int i = 50; i <= 100; i+=5){
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 10; i >= 0; i--){
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 100; i >= 10; i -= 5){
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0, j = 10; i <= 5; i++, j-- ){
        printf("i = %d, j = %d\n", i, j);
    }
    printf("\n");
    for (float a = 0.1f; fabs(a - 2.0) > 0.01; a += 0.1f){
        printf("a = %.20f\n", a);
    }

    return 0;
}