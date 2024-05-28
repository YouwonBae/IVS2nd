#include <stdio.h>
// (층수 - 1)*2 + 1
int main(void){
    int floor = 10;

    for(int i = 1; i <= floor; i++){
        int empty = floor - i + 1;

        for(int j = 0; j < empty; j++){
            printf(" ");
        }

        for(int j = 0; j < (i - 1)*2 + 1; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}