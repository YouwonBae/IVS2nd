#include <stdio.h>
// �̸�(���ں�����), �ּ�(��������)�� �Է¹ޱ�
/*
scanf("%s", ����, �Է¹���byte��)
    : white space�� ���� �� ������ ���� ������ return

gets(����)
    : '\n' ���������� �ν��ϰ� �� �ڴ� ���ۿ��� ����
*/
int main(void){
    // char* name; // �̷��� �ʱ�ȭ �ϸ� ó�� �ּҸ� ������ ������ ���� ������� Ȯ������ ����
    char name[128];
    char address[512];

    printf("�̸� >> ");
    scanf("%s", name, sizeof(name));

    printf("�ּ� >> ");
    // scanf("%s", address, sizeof(address));
    gets(address); // ���۸� ����� �뵵
    gets(address);

    printf("�Է��� �̸� : %s\n", name);
    printf("�Է��� �ּ� : %s\n", address);

    // for(int i = 0; i < 5; i++){
    //     printf("name[%d] = %c\n", i, *(name + i));
    // }

    return 0;
}