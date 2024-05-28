#include <stdio.h>
// callByValue
int sum(int from, int to); // 함수 선언

int main(void){
    int a=1, b=100;
    int tot = sum(a, b); // 함수 호출

    printf("%d부터 %d까지 누적합은 %d입니다.\n", a, b, tot);

    a = 10, b = 100;
    tot = sum(a, b); // 함수 호출

    printf("%d부터 %d까지 누적합은 %d입니다.\n", a, b, tot);

    return 0;
}

int sum(int from, int to){ // 함수 정의
    int result = 0;
    for(int i = from; i <= to; i++){
        result += i;
    }
    return result;
}