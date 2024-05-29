#include <stdio.h>
// ������ ���� call by reference�� �Լ� �����ؾ� swap���� ����
void swap(int* a, int* b);

int main(void){
    int a = 10, b = 20;
    printf("swap() ȣ�� �� a�ּ� : %p, a = %d, b�ּ� : %p, b = %d\n", &a, a, &b, b);

    swap(&a, &b); // �Լ� ȣ��
    printf("swap() ȣ�� �� a�ּ� : %p, a = %d, b�ּ� : %p, b = %d\n", &a, a, &b, b);

    return 0;
}

void swap(int* a, int* b){
    int temp = *a;
    printf("swap() �Լ� �� a�ּ� : %p, a = %d, b�ּ� : %p, b = %d\n", a, *a, b, *b);
    *a = *b;
    *b = temp;
    printf("swap() �Լ� �� a�ּ� : %p, a = %d, b�ּ� : %p, b = %d\n", a, *a, b, *b);
}