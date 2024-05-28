#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
// 난수발생 초기화 작업 필수
// rand() : 0 ~ 32767까지의 난수 발생
int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);

const int level_limit = 3;

int main(void){
    srand((unsigned int)time(NULL)); // 난수 초기화는 프로그램 실행 시 한번만 해도된다.

    int now_lv = 1;
    while(1){
        int rep = 0;
        int n1 = getRandomNumber(now_lv);
        int n2 = getRandomNumber(now_lv);

        showQuestion(now_lv, n1, n2);

        scanf("%d", &rep);

        if(rep == n1 * n2){
            if(now_lv >= level_limit){
                printf("%d단계까지 잘 오셨습니다. 성공입니다.\n", now_lv); // 성공 종료
                break;
            }else{
                printf("%d단계 정답입니다.\n", now_lv++); // 성공 단계 상승
            }
        }else{
            printf("%d단계 오답입니다. 종료입니다.\n", now_lv); // 오답 종료
            break;
        }
    }
    
    return 0;
}

int getRandomNumber(int level){
    return (rand()%4 + 1) + (level-1)*4;
}

void showQuestion(int level, int num1, int num2){
    printf("\n%d레벨 구구단을 외자~\n", level);
    printf("answp : %d x %d = ", num1, num2);
}