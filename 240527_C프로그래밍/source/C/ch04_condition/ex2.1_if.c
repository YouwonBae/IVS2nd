#include <stdio.h>

int main(void){
    int num = 3;

    if(num == 1){
        printf("dice 1");
    }else if(num == 2){
        printf("dice 2");
    }else if(num == 3){
        printf("dice 3");
    }else if(num == 4){
        printf("dice 4");
    }else if(num == 5){
        printf("dice 5");
    }else if(num == 6){
        printf("dice 6");
    }else{
        printf("number is not in dice");
    }

    return 0;
}