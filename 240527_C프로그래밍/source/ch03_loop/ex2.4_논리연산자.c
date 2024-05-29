#include <stdio.h>
// 논리연산자 : &&(and), ||(or), !(not)
int main(void){
    int i = 1, j = 10, h = 10;

    printf("(i>j) && (++j>h) = %s\n", (i>j) && (++j>h) ? "참" : "거짓");
    printf("j = %d\n", j);
    //&&연산은 좌항이 false인 경우 우항은 실행하지 않고 결과를 false로 계산한다. 따라서 우항의 ++전위연산자가 실행되지 않음

    printf("(i<j) || (++j>h) = %s\n", (i<j) || (++j>h) ? "참" : "거짓");
    printf("j = %d\n", j);
    //||연산은 좌항이 true인 경우 우항은 실행하지 않고 결과를 true로 계산한다. 따라서 우항의 ++전위연산자가 실행되지 않음

    return 0;
}