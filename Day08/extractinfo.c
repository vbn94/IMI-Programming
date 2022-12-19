#include <stdio.h>
#include <string.h>

int main(){
    int state = 0;
    int m1 = 0;
    int m2 = 0;
    char text[] = "TESTER#C11#USER#VCD";
    char user[4];
    char tester[6];
    int len = strlen(text);
    for (int i = 0; i < len; i++){
        if (state == 0){
            if (text[i] == '#'){
                state = 1;
            } 
        } else if (state == 1){
            if (text[i] == '#'){
                state = 2;
            } else {
                tester[m1] = text[i];
                m1++;
            }
        } else if (state == 2){
            if (text[i] == '#'){
                state = 3;
            } 
        } else if (state == 3){
            user[m2] = text[i];
            m2++;
        }
    }
    printf("User: %s\n", user);   // C11
    printf("Tester: %s\n", tester);  // VCD
    return 0;
}