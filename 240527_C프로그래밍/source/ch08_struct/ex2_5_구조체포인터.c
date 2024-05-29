#include <stdio.h>

struct GameInfo{
    char* name;
    int year;
    int price;
};

typedef struct GameInfo GI;

int main(void){
    GI gameInfo1;
    gameInfo1.name = "���̹�C";
    gameInfo1.year = 2024;
    gameInfo1.price = 33000;

    GI* gamePtr = &gameInfo1;

    printf("��������(gameInfo1) ���\n");
    printf("�����̸� : %s\n", gameInfo1.name);
    printf("��ÿ��� : %d\n", gameInfo1.year);
    printf("���Ӱ��� : %d\n", gameInfo1.price);

    printf("��������(gamePtr) ���\n");
    printf("�����̸� : %s\n", (*gamePtr).name); // *���� .�� �켱������ �� ���� ������ () �� �ؾ���
    printf("��ÿ��� : %d\n", (*gamePtr).year);
    printf("���Ӱ��� : %d\n", (*gamePtr).price);

    printf("��������(gamePtr) ���\n");
    printf("�����̸� : %s\n", gamePtr->name); // ������ ������ -> :  �����Ͱ� ����Ű�� ����ü�� �������
    printf("��ÿ��� : %d\n", gamePtr->year);
    printf("���Ӱ��� : %d\n", gamePtr->price);

    return 0;
}