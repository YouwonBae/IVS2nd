#include <stdio.h>

int main(void){
    int score;

    printf("score >> ");
    scanf("%d", &score);

    int temp = score == 100 ? 99 : score;
    switch(temp/10){
        case 9 : 
            printf("A"); break;
        case 8 : 
            printf("B"); break;
        case 7 : 
            printf("C"); break;
        case 6 : 
            printf("D"); break;
        case 5 : case 4 : case 3 : case 2 : case 1 : case 0 : 
            printf("F"); break;
        default :
            printf("please input correct score");
    }

    return 0;
}