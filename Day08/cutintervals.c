#include <stdio.h>
#include <string.h>

int main(){
    char str1[150];
    char str2[150];
    fgets(str1, 150, stdin);
    str1[strlen(str1) - 1] = '\0';
    int len1 = strlen(str1);
    int m = 0;
    for (int i = 0; i < len1; i++){
        if (str1[i] != ' '){
            str2[m] = str1[i];
            m++;
        }
    }
    str2[m] = '\0';
    printf("String: %s\n", str2);
    return 0;
}