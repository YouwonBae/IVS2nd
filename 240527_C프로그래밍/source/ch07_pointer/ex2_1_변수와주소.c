#include <stdio.h>

int main(void){
    int a = 1;
    int b = 2;
    char* str = "Hello";

    printf("a변수 주소 : %p, a변수의 값 : %d\n", &a, a);
    printf("b변수 주소 : %p, b변수의 값 : %d\n", &b, b);
    printf("str의 주소 : %p, 문자열의 주소 : %p, 문자열의 내용 : %s", &str, str, str);

    a = 10; b = 20; str = "HI";
    printf("\n================================\n");
    
    printf("a변수 주소 : %p, a변수의 값 : %d\n", &a, a);
    printf("b변수 주소 : %p, b변수의 값 : %d\n", &b, b);
    printf("str의 주소 : %p, 문자열의 주소 : %p, 문자열의 내용 : %s", &str, str, str);

    return 0;
}