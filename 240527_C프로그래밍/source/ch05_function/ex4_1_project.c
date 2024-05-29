#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
// �����߻� �ʱ�ȭ �۾� �ʼ�
// rand() : 0 ~ 32767������ ���� �߻�
int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);

const int level_limit = 3;

int main(void){
    srand((unsigned int)time(NULL)); // ���� �ʱ�ȭ�� ���α׷� ���� �� �ѹ��� �ص��ȴ�.

    int now_lv = 1;
    while(1){
        int rep = 0;
        int n1 = getRandomNumber(now_lv);
        int n2 = getRandomNumber(now_lv);

        showQuestion(now_lv, n1, n2);

        scanf("%d", &rep);

        if(rep == n1 * n2){
            if(now_lv >= level_limit){
                printf("%d�ܰ���� �� ���̽��ϴ�. �����Դϴ�.\n", now_lv); // ���� ����
                break;
            }else{
                printf("%d�ܰ� �����Դϴ�.\n", now_lv++); // ���� �ܰ� ���
            }
        }else{
            printf("%d�ܰ� �����Դϴ�. �����Դϴ�.\n", now_lv); // ���� ����
            break;
        }
    }
    
    return 0;
}

int getRandomNumber(int level){
    return (rand()%4 + 1) + (level-1)*4;
}

void showQuestion(int level, int num1, int num2){
    printf("\n%d���� �������� ����~\n", level);
    printf("answp : %d x %d = ", num1, num2);
}