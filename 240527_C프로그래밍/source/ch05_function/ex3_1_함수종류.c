#include <stdio.h>
// �Լ� ����
void line(int i); //C���� C++�� �޸� �Լ� �����ε� �Ұ�
void noArg();


int main(void){
    line(40); // �Լ� ȣ��
    noArg();
    line(50);

    return 0;
}

void line(int i){ // // �Լ� ����(�Լ� ����)
    while(i--){
        printf("=");
    }
    printf("\n");
}

void noArg(){
    printf("��ȯ���� �Ű������� ���� �Լ�\n");
}