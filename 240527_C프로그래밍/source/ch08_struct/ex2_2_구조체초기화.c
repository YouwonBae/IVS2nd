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
    struct student s2 = {202, 3.81};

    s2.num = 101;
    s2.grade = 4.43;

    printf("�й� = %d, ���� = %.2lf\n", s2.num, s2.grade);

    return 0;
}