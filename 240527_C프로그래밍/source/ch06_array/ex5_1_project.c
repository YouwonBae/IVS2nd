#include <stdio.h>

/*
유수민, 김현식, 땅땅이, 새대가ㄹ, 슘당이의 키를 입력받아
    출력사항 : 평균 : 170.50
                최장 : 김현식 190
                최단 : 슘당이 120
*/

int main(void){
    const int cnt = 5;
    char* names[] = {"유수민", "김현식", "땅땅이", "새대갈", "슘당이"};
    int heights[5];
    int totHeight = 0;
    int idxMin, idxMax;
    int minHeight = 999;
    int maxHeight = 0;

    for(int i = 0 ; i < cnt; i++){
        printf("%s의 키를 입력하세요. : ", names[i]);
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

    printf("\n- 평균키 : %.2lf\n", totHeight / 5.0);
    printf("- 최장신 %s의 키는 : %d입니다.\n", names[idxMax], maxHeight);
    printf("- 최단신 %s의 키는 : %d입니다.\n", names[idxMin], minHeight);

    return 0;
}