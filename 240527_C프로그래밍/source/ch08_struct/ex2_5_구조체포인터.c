#include <stdio.h>

struct GameInfo{
    char* name;
    int year;
    int price;
};

typedef struct GameInfo GI;

int main(void){
    GI gameInfo1;
    gameInfo1.name = "사이버C";
    gameInfo1.year = 2024;
    gameInfo1.price = 33000;

    GI* gamePtr = &gameInfo1;

    printf("게임정보(gameInfo1) 출력\n");
    printf("게임이름 : %s\n", gameInfo1.name);
    printf("출시연도 : %d\n", gameInfo1.year);
    printf("게임가격 : %d\n", gameInfo1.price);

    printf("게임정보(gamePtr) 출력\n");
    printf("게임이름 : %s\n", (*gamePtr).name); // *보다 .이 우선순위가 더 높기 때문에 () 꼭 해야함
    printf("출시연도 : %d\n", (*gamePtr).year);
    printf("게임가격 : %d\n", (*gamePtr).price);

    printf("게임정보(gamePtr) 출력\n");
    printf("게임이름 : %s\n", gamePtr->name); // 포인터 연산자 -> :  포인터가 가리키는 구조체의 멤버변수
    printf("출시연도 : %d\n", gamePtr->year);
    printf("게임가격 : %d\n", gamePtr->price);

    return 0;
}