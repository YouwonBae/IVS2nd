#include <stdio.h>
// ������ ���� call by value�� �Լ� ���� �� �Ǵٸ� �ּҰ� �Ҵ�ǹǷ� ���� �����Ͱ� �����������
void swap(int a, int b);

int main(void){
    int a = 10, b = 20;
    printf("swap() ȣ�� �� a�ּ� : %p, a = %d, b�ּ� : %p, b = %d\n", &a, a, &b, b);

    swap(a, b); // �Լ� ȣ��
    printf("swap() ȣ�� �� a�ּ� : %p, a = %d, b�ּ� : %p, b = %d\n", &a, a, &b, b);

    return 0;
}

void swap(int a, int b){
    printf("swap() �Լ� �� a�ּ� : %p, a = %d, b�ּ� : %p, b = %d\n", &a, a, &b, b);
    int temp = a;
    a = b;
    b = temp;
    printf("swap() �Լ� �� a�ּ� : %p, a = %d, b�ּ� : %p, b = %d\n", &a, a, &b, b);
}