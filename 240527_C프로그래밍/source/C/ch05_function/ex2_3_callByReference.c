#include <stdio.h>
// callByValue
void sum(int from, int to, int* ref); // 함수 선언

int main(void){
    int a=1, b=100, tot;
    sum(a, b, &tot); // 함수 호출
    printf("%d부터 %d까지 누적합은 %d입니다.\n", a, b, tot);

    a = 10, b = 100;
    sum(a, b, &tot); // 함수 호출
    printf("%d부터 %d까지 누적합은 %d입니다.\n", a, b, tot);

    return 0;
}

void sum(int from, int to, int* ref){ // 함수 정의
    *ref = 0;
    for(int i = from; i <= to; i++){
        *ref += i;
    }

    return;
}