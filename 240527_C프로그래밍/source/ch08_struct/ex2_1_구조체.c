#include <stdio.h>
/*
����ü : ���� ������ �����͸� �ϳ��� ���� �ڷ������� ���� ��
*/

struct student{
    /* datas */
    int num;        // �й� (student ����ü ��� 1)
    double grade;   // ���� (student ����ü ��� 2)

};

int main(void){
    struct student s1;

    s1.num = 101;
    s1.grade = 4.43;

    printf("�й� = %d, ���� = %.2lf\n", s1.num, s1.grade);

    return 0;
}