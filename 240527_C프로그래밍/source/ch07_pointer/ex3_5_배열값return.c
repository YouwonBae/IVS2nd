#include <stdio.h>

//void changeArray(int a[3]);
int* returnArray(int* ptr);

int main(void){
    int arr[] = {10, 20, 30};

    printf("수정 전\n");
    for(int i = 0; i < 3; i++){
       printf("%d, ", arr[i]);
    }
    printf("\n");

    int* afterArr = returnArray(arr); // 함수 호출

    printf("수정 후\n");
    for(int i = 0; i < 3; i++){
       printf("%d, ", afterArr[i]);
    }
    printf("\n");

    return 0;
}

int* returnArray(int* ptr){
    static int resultArr[3]; // static : 함수 리턴 시 해당 메모리를 초기화하지 않는 명령어

    for(int i = 0; i < 3; i++){
        resultArr[i] = *(ptr + i);
    }


    resultArr[1] = 99;

    return resultArr;
}