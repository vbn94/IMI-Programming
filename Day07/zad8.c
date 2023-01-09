#include <stdio.h>
#include <string.h>

int main(){
    char name1[] = "Hello, IMI"; //{ 0, 'H', 'e', 0, 'l', 'l', 'o', ',', ' ', 'I', 'M', 'I', '\0' };
    char name2[] = "Pesho"; //{'P', 'e', 's', 'h', 'o', '\0' };
    // name2[3] = '\0';
    printf("%s\n", name1);
    printf("%s\n", name2);
    printf("%lu\n", strlen(name1));
    printf("%lu\n", strlen(name2));
    return 0;
}