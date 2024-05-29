#include <stdio.h>
// 배열(array) : 동일 자료형의 집합
int main(void){
    // 배열 선언
    int subway[3];

    subway[0] = 30;
    subway[1] = 40;
    subway[2] = 50;

    for(int i = 0; i < 3; i++){
        printf("subway[%d] = %d\n", i, subway[i]);
    }

    return 0;
}