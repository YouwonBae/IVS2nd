#include <stdio.h>

int main(void){
    int a = 1;
    int b = 2;
    
    printf("a�ּ� : %p, a��:%d\n", &a, a);
    printf("b�ּ� : %p, b��:%d\n", &b, b);

    int* pointer = &a;
    *pointer *= 3;
    printf("������ ��(�ּҸ� ��� ����) : %p, ������ ��:%d\n", pointer, *pointer);

    pointer = &b;
    printf("������ ��(�ּҸ� ��� ����) : %p, ������ ��:%d\n", pointer, *pointer);

    return 0;
}