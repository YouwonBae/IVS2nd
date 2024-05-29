#include <stdio.h>
// 다음과 같이 call by value로 함수 구현 시 또다른 주소가 할당되므로 원래 데이터가 변경되지않음
void swap(int a, int b);

int main(void){
    int a = 10, b = 20;
    printf("swap() 호출 전 a주소 : %p, a = %d, b주소 : %p, b = %d\n", &a, a, &b, b);

    swap(a, b); // 함수 호출
    printf("swap() 호출 후 a주소 : %p, a = %d, b주소 : %p, b = %d\n", &a, a, &b, b);

    return 0;
}

void swap(int a, int b){
    printf("swap() 함수 안 a주소 : %p, a = %d, b주소 : %p, b = %d\n", &a, a, &b, b);
    int temp = a;
    a = b;
    b = temp;
    printf("swap() 함수 안 a주소 : %p, a = %d, b주소 : %p, b = %d\n", &a, a, &b, b);
}