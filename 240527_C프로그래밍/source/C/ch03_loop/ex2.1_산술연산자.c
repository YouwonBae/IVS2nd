#include <stdio.h>
//산술연산자 : + - / * %
int main(void){
    int n1 = 33, n2 = 10;

    printf("%d, %c, %d = %d\n", n1, '/', n2, n1/n2);
    //묵시적인 형변환 : int i = 3.2
    //명시적인 형변환 : (double)n1
    printf("%d, %c, %d = %.3lf\n", n1, '/', n2, (double)n1/n2);
    printf("%d, %c, %d = %d\n", n1, '%', n2, n1%n2);

    // 나머지 연산자 : 그룹 나눌때
    if(n1%2 == 0){
        printf("n1은 짝수\n");
    }else{
        printf("n1은 홀수\n");
    }
    
    return 0;
}

// 한글완성형(EUC-KR) 실제로 쓰이는 한글 조합만 저장해둔 방식
// 한글조합형(UTF-8) 초 중 종성을 조합하는 방식