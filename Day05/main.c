#include <stdio.h>

int main()
{
    int a = 10;
    int b = 10;
    int c = 10;
    if ((a = 0) || (b = 4) || (c = 4)){
        printf("True\n");
    } else {
        printf("False\n");
    }
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}