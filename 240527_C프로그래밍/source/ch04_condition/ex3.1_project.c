#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
// �����߻� �ʱ�ȭ �۾� �ʼ�
// rand() : 0 ~ 32767������ ���� �߻�

int main(void){
    srand((unsigned int)time(NULL)); // ���� �ʱ�ȭ

    int ans = rand()%100 + 1;
    printf("answer : %d\n", ans);
    
    int cnt = 5;
    //printf("input count : ");
    //scanf("%d", &cnt);

    int num = 0;
    int flg = 0;
    int now_cnt = 1;
    while(cnt--){
        printf("1���� 100������ ���ڸ� ���� ������(���� ��ȸ : %d��) : ", cnt + 1);
        scanf("%d", &num);

        if(num < 1 || num > 100){ //error
            printf("������ �´� ���ڸ� �Է��ϼ���.\n");
            cnt++;
            now_cnt--;
        }else if(num < ans){ //������
            printf("UP!\n");
        }else if(num > ans){ // Ŭ��
            printf("DOWN!\n");
        }else{
            printf("%d�� �����Դϴ�. �����մϴ�. %d�� ���� ����.\n", ans, now_cnt );
            flg = 1;
            break;
        }

        now_cnt++;
    }

    if(flg == 0){
        printf("5���� ��ȸ�� ��� ����߾��. �ƽ��Ե� �����߽��ϴ�.\n");
    }
    
    return 0;
}