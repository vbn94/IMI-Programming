#include <stdio.h>
#include <string.h>

int main(){
    char factoryname[] = "IMI";
    char text[100];
    fgets(text, 100, stdin);
    text[strlen(text) - 1] = '\0';
    if (!strcmp(text, factoryname)){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}