#include <stdio.h>
#include <string.h>

int main(void){
    int a;
    int* i = &a;
    int* j = i;
    *i = 10;

    printf("i = %d\tj = %d\n", *i, *j);

    char* str1 = "Hello";
    char* str2; // = str1; // str1�� �ּҸ� str2�� �Ҵ�(���� ����)

    strcpy(str2, str1); // str1�� ���ڿ��� str2�� ���� ����

    str1 = "Hi"; // str1�� ���ڿ��� �ٲ�� str1�� �������� ������ 
                 // ���ο� ������ ���ڿ� ����
    printf("str1 = %s\tstr2 = %s\n", str1, str2);

    return 0;
}