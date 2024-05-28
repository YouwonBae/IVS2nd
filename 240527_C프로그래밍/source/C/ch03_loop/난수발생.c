#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
// 난수발생 초기화 작업 필수
// rand() : 0 ~ 32767까지의 난수 발생

int main(void){
    srand((unsigned int)time(NULL)); // 난수 초기화

    printf("%d\n", rand()%100 + 1);
    printf("%d\n", rand()%45 + 1);
    printf("%d\n", rand()%50 + 50);
    
    return 0;
}