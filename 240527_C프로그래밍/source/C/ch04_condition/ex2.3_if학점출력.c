#include <stdio.h>

int main(void){
    int score;

    printf("score >> ");
    scanf("%d", &score);

    if(score >= 90 && score <= 100){
        printf("A");
    }else if(score >= 80 && score <= 90){
        printf("B");
    }else if(score >= 70 && score <= 80){
        printf("C");
    }else if(score >= 60 && score <= 70){
        printf("D");
    }else if(score >= 0 && score <= 60){
        printf("F");
    }else{
        printf("please input correct score");
    }

    return 0;
}