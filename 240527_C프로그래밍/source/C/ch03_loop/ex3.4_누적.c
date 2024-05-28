#include <stdio.h>

int main(void){
    int tot = 0; // 누적변수

    for(int i = 1; i <= 10; i++){
        tot += i;
        
        if(i == 10){
            printf("%d = ", i);
        }else{
            printf("%d + ", i);
        }
    }

    printf("%d\n", tot);

    return 0;
}