#include <stdio.h>
// ����ü �迭
struct student{
    int id;          // �й� (student ����ü ��� 1)
    char name[20];   // �̸� (student ����ü ��� 2)
    double grade;    // ���� (student ����ü ��� 3)
};

void stPrint(struct student s);

int main(void){
    struct student sArr[3] = {  {101, "ȫ�浿", 4.43},
                                {102, "��浿", 3.81},
                                {103, "������", 4.04} };

    printf("�й�\t�̸�\t����\n");
    for(int i = 0; i < 3; i++){
        stPrint(sArr[i]);
    }

    return 0;
}

void stPrint(struct student s){
    printf("%d\t%s\t%.2lf\n", s.id, s.name, s.grade);
}