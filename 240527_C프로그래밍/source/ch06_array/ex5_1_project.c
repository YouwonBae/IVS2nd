#include <stdio.h>

/*
������, ������, ������, ���밡��, �������� Ű�� �Է¹޾�
    ��»��� : ��� : 170.50
                ���� : ������ 190
                �ִ� : ������ 120
*/

int main(void){
    const int cnt = 5;
    char* names[] = {"������", "������", "������", "���밥", "������"};
    int heights[5];
    int totHeight = 0;
    int idxMin, idxMax;
    int minHeight = 999;
    int maxHeight = 0;

    for(int i = 0 ; i < cnt; i++){
        printf("%s�� Ű�� �Է��ϼ���. : ", names[i]);
        scanf("%d", &heights[i]);

        totHeight += heights[i];

        if(heights[i] > maxHeight){
            maxHeight = heights[i];
            idxMax = i;
        }
        
        if(heights[i] < minHeight){
            minHeight = heights[i];
            idxMin = i;
        }
    }

    printf("\n- ���Ű : %.2lf\n", totHeight / 5.0);
    printf("- ����� %s�� Ű�� : %d�Դϴ�.\n", names[idxMax], maxHeight);
    printf("- �ִܽ� %s�� Ű�� : %d�Դϴ�.\n", names[idxMin], minHeight);

    return 0;
}