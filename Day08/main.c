#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "IMI 0 0 Bulgaria";
    //printf("%s\n", str);
    /*int len = strlen(str);
    for (int i = 0; i < len; i++){
        printf("%c\n", str[i]);
    }*/
    int n = 0;
    while (str[n]){
        printf("%c\n", str[n++]);
        //n++;
    }
    return 0;
}