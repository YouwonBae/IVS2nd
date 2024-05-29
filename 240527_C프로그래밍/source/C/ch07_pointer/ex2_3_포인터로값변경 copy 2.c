#include <stdio.h>

int main(void){
    int a = 1;
    int b = 2;

    int* pointer;
    pointer = &a;

    *pointer *= 3;
    printf("a 값:%d\n", a);

    pointer = &b;
    *pointer *= 3;
    printf("b 값:%d\n", b);

    printf("포인터 값(주소를 담고 있음) : %p, 역참조 값:%d\n", pointer, *pointer);

    return 0;
}