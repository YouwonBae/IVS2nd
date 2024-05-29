#include <stdio.h>

int main(void){
    for(int i = 2; i < 10; i++){
        printf("%d단 구구단을 출력합니다.\n", i);
        for(int j = 1; j < 10; j++){
            printf("%d x %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }

    return 0;
}