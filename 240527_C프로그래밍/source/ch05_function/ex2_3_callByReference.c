#include <stdio.h>
// callByValue
void sum(int from, int to, int* ref); // �Լ� ����

int main(void){
    int a=1, b=100, tot;
    sum(a, b, &tot); // �Լ� ȣ��
    printf("%d���� %d���� �������� %d�Դϴ�.\n", a, b, tot);

    a = 10, b = 100;
    sum(a, b, &tot); // �Լ� ȣ��
    printf("%d���� %d���� �������� %d�Դϴ�.\n", a, b, tot);

    return 0;
}

void sum(int from, int to, int* ref){ // �Լ� ����
    *ref = 0;
    for(int i = from; i <= to; i++){
        *ref += i;
    }

    return;
}