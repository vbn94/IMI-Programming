#include <stdio.h>

#define NUM 42
#define CHISLO int
#define hello() printf("Hello\n")
#define ako if
#define inache else
#define SUM(num1,num2) ((num1)+(num2))
#define MULT(x,y) ((x)*(y))
#define PI 3.1415
#define CIRCLE_AREA(radius) (PI*(radius)*(radius))
#define PARALLEL(R1,R2) (((R1)*(R2))/((R1)+(R2)))

int main(){
    int result = SUM(10,20) * 10;
    printf("Result = %d\n", result);
    result = MULT(10+1,20);
    printf("Result = %d\n", result);
    double R12 = PARALLEL(5.0,5.0);
    printf("R12 = %.2lf\n", R12);
    CHISLO a = NUM + NUM;
    CHISLO b = 10 * NUM;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    hello();
    ako (a > b){
        printf("a\n");
    } inache {
        printf("b\n");
    }
    return 0;
}