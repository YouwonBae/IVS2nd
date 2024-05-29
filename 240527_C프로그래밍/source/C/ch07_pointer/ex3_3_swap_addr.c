#include <stdio.h>
// 다음과 같이 call by reference로 함수 구현해야 swap구현 가능
void swap(int* a, int* b);

int main(void){
    int a = 10, b = 20;
    printf("swap() 호출 전 a주소 : %p, a = %d, b주소 : %p, b = %d\n", &a, a, &b, b);

    swap(&a, &b); // 함수 호출
    printf("swap() 호출 후 a주소 : %p, a = %d, b주소 : %p, b = %d\n", &a, a, &b, b);

    return 0;
}

void swap(int* a, int* b){
    int temp = *a;
    printf("swap() 함수 안 a주소 : %p, a = %d, b주소 : %p, b = %d\n", a, *a, b, *b);
    *a = *b;
    *b = temp;
    printf("swap() 함수 안 a주소 : %p, a = %d, b주소 : %p, b = %d\n", a, *a, b, *b);
}