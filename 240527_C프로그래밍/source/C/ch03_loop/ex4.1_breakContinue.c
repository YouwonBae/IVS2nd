#include <stdio.h>

int main(void){
    for(int i = 1; i <= 5; i++){
        if(i == 3) continue; //break;
        printf("%d\t",i);
    }

    return 0;
}