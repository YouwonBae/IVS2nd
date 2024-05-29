#include <stdio.h>
// 문자열은 문자 배열임
int main(void){
    //char* name = "jenny";
    char name[] = "jenny";
    //char name[] = {'j', 'e', 'n', 'n', 'y', '\0'};

    // for(int i = 0; i <= 5; i++){
    //     printf("name[%d] = %c\n", i, name[i]);
    // }

    for(int i = 0; i <= 5; i++){
        printf("name[%d] = %c\n", i, *(name + i));
    }

    return 0;
}