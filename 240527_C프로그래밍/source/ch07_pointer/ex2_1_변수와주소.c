#include <stdio.h>

int main(void){
    int a = 1;
    int b = 2;
    char* str = "Hello";

    printf("a���� �ּ� : %p, a������ �� : %d\n", &a, a);
    printf("b���� �ּ� : %p, b������ �� : %d\n", &b, b);
    printf("str�� �ּ� : %p, ���ڿ��� �ּ� : %p, ���ڿ��� ���� : %s", &str, str, str);

    a = 10; b = 20; str = "HI";
    printf("\n================================\n");
    
    printf("a���� �ּ� : %p, a������ �� : %d\n", &a, a);
    printf("b���� �ּ� : %p, b������ �� : %d\n", &b, b);
    printf("str�� �ּ� : %p, ���ڿ��� �ּ� : %p, ���ڿ��� ���� : %s", &str, str, str);

    return 0;
}