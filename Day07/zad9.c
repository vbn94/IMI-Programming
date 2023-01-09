#include <stdio.h>
#include <string.h>

int main(){
    char name1[] = "Hello, IMI";
    //char *name2 = name1; 
    char name2[] = "Hello, IMI";
    if (strcmp(name1, name2) == 0){
        printf("Equals\n");
    } else {
        printf("Not equals\n");
    }
    printf("%p\n%p\n", name1, name2);
    return 0;
}