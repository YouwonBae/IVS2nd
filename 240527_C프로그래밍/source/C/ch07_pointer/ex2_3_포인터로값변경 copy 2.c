#include <stdio.h>

int main(void){
    int a = 1;
    int b = 2;

    int* pointer;
    pointer = &a;

    *pointer *= 3;
    printf("a ��:%d\n", a);

    pointer = &b;
    *pointer *= 3;
    printf("b ��:%d\n", b);

    printf("������ ��(�ּҸ� ��� ����) : %p, ������ ��:%d\n", pointer, *pointer);

    return 0;
}