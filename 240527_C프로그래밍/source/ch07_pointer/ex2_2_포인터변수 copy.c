#include <stdio.h>

int main(void){
    int a = 1;
    int b = 2;
    
    printf("a주소 : %p, a값:%d\n", &a, a);
    printf("b주소 : %p, b값:%d\n", &b, b);

    int* pointer = &a;
    *pointer *= 3;
    printf("포인터 값(주소를 담고 있음) : %p, 역참조 값:%d\n", pointer, *pointer);

    pointer = &b;
    printf("포인터 값(주소를 담고 있음) : %p, 역참조 값:%d\n", pointer, *pointer);

    return 0;
}