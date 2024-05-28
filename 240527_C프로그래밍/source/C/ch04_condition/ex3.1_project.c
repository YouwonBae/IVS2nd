#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
// 난수발생 초기화 작업 필수
// rand() : 0 ~ 32767까지의 난수 발생

int main(void){
    srand((unsigned int)time(NULL)); // 난수 초기화

    int ans = rand()%100 + 1;
    printf("answer : %d\n", ans);
    
    int cnt = 5;
    //printf("input count : ");
    //scanf("%d", &cnt);

    int num = 0;
    int flg = 0;
    int now_cnt = 1;
    while(cnt--){
        printf("1부터 100사이의 숫자를 맞춰 보세요(남은 기회 : %d번) : ", cnt + 1);
        scanf("%d", &num);

        if(num < 1 || num > 100){ //error
            printf("범위에 맞는 숫자를 입력하세요.\n");
            cnt++;
            now_cnt--;
        }else if(num < ans){ //작을때
            printf("UP!\n");
        }else if(num > ans){ // 클때
            printf("DOWN!\n");
        }else{
            printf("%d는 정답입니다. 축하합니다. %d번 만에 성공.\n", ans, now_cnt );
            flg = 1;
            break;
        }

        now_cnt++;
    }

    if(flg == 0){
        printf("5번의 기회를 모두 사용했어요. 아쉽게도 실패했습니다.\n");
    }
    
    return 0;
}