#include <stdio.h>
// callByValue
int sum(int from, int to); // �Լ� ����

int main(void){
    int a=1, b=100;
    int tot = sum(a, b); // �Լ� ȣ��

    printf("%d���� %d���� �������� %d�Դϴ�.\n", a, b, tot);

    a = 10, b = 100;
    tot = sum(a, b); // �Լ� ȣ��

    printf("%d���� %d���� �������� %d�Դϴ�.\n", a, b, tot);

    return 0;
}

int sum(int from, int to){ // �Լ� ����
    int result = 0;
    for(int i = from; i <= to; i++){
        result += i;
    }
    return result;
}