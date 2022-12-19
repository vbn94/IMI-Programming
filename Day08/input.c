#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    char str1[20];
    //scanf("%s", str);
    fgets(str, 20, stdin);
    str[strlen(str) - 1] = '\0';
    printf("String: %s\n", str);
    return 0;
}