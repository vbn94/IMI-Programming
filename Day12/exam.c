#include <stdio.h>
#include <string.h>

int main(){
    char text[101];
    fgets(text, 100, stdin);
    int count = 0;
    for (int i = 0; i < strlen(text); i++){
        if (text[i] >= '1' && text[i] <= '9'){
            count = count + (text[i] - '0');
        }
    }
    printf("%d\n", count);
    return 0;
}