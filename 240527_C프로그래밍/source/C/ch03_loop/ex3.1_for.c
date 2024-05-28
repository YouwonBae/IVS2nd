#include <stdio.h>
// 반복문 : for(특정 횟수 반복), while(조건 만족시 반복), do~while(반드시 1회 수행 후 조건만족시 반복)
int main(void){
    printf("for\n");
    for(int i = 0; i < 10; i++){
        printf("%d. hello world\n", i);
    }

    return 0;
}