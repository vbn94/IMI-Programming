#include <stdio.h>

int main()
{
    int count;
    printf("Enter number of measures: ");
    scanf("%d", &count);
    int ok = 0;
    for (int i = 0; i < count; i++){
        int current;
        scanf("%d", &current);
        if (current >= 9000 && current <= 11000){
            ok++;
        }
    }
    printf("OK currents: %d\n", ok);
    int nok = count - ok;
    printf("NOK currents: %d\n", nok);
    return 0;
}