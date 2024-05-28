#include <stdio.h>
// 배열(array) : 동일 자료형의 집합
int main(void){
    // 배열 선언과 초기화
    // 배열 크기를 생략하지 않으면 그 방 갯수만크 메모리 잡힘
    // 초기화 하지 않은 나머지 공간에는 0으로 초기화
    int subway[10] = {30, 40, 50}; // = {30, 40, 50, 0, 0, 0, 0, 0, 0, 0}

    for(int i = 0; i < 10; i++){
        printf("subway[%d] = %d\n", i, subway[i]);
    }

    return 0;
}