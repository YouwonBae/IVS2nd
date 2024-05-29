#include <stdio.h>
#include <stdbool.h> // true, false 저장 라이브러리
// 비교연산자 : < <= > >= == != ...
// 삼항연산자 : (조건) ? (조건이 참일때의 값) : (조건이 거짓일 때 값)
int main(void){
    int n1 = 10;
    int n2 = 5;

    bool result = n1>=n2;

    printf("%d %s %d는 %s\n", n1, ">=", n2, result ? "참" : "거짓");

    return 0;
}