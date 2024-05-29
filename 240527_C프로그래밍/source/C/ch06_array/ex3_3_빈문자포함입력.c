#include <stdio.h>
// 이름(빈문자불포함), 주소(빈문자포함)를 입력받기
/*
scanf("%s", 변수, 입력받을byte수)
    : white space가 오면 그 이전의 버퍼 내용을 return

gets(변수)
    : '\n' 이전까지만 인식하고 그 뒤는 버퍼에서 지움
*/
int main(void){
    // char* name; // 이렇게 초기화 하면 처음 주소만 잡히기 때문에 문자 저장공간 확보되지 않음
    char name[128];
    char address[512];

    printf("주소 >> ");
    // scanf("%s", address, sizeof(address));
    gets(address);
    
    printf("이름 >> ");
    scanf("%s", name, sizeof(name));

    printf("입력한 이름 : %s\n", name);
    printf("입력한 주소 : %s\n", address);

    // for(int i = 0; i < 5; i++){
    //     printf("name[%d] = %c\n", i, *(name + i));
    // }

    return 0;
}