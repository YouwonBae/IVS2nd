#include <stdio.h>
// 함수 선언
void line(int i); //C언어는 C++과 달리 함수 오버로딩 불가
void noArg();


int main(void){
    line(40); // 함수 호출
    noArg();
    line(50);

    return 0;
}

void line(int i){ // // 함수 정의(함수 구현)
    while(i--){
        printf("=");
    }
    printf("\n");
}

void noArg(){
    printf("반환값도 매개변수도 없는 함수\n");
}