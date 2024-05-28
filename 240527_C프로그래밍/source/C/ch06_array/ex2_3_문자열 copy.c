#include <stdio.h>
// 문자열은 문자 배열임
int main(void){
    char* name = "jenny";

    for(int i = 0; i < 5; i++){
        printf("name[%d] = %c\n", i, name[i]);
    }

    // for(int i = 0; i < 5; i++){
    //     printf("name[%d] = %c\n", i, name + i);
    // }

    return 0;
}