#include <stdio.h>
// 반복문 : for(특정 횟수 반복), while(조건 만족시 반복), do~while(반드시 1회 수행 후 조건만족시 반복)
int main(void){
    printf("while\n");
    int i = 0;
    while(i < 10){
        printf("%d. hello world\n", i++);
    }

    return 0;
}