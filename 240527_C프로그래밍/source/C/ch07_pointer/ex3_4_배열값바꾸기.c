#include <stdio.h>

//void changeArray(int a[3]);
void changeArray(int* ptr);

int main(void){
    int arr[] = {10, 20, 30};

    for(int i = 0; i < 3; i++){
       printf("%d, ", arr[i]);
    }
    printf("\n");

    changeArray(arr); // 함수 호출

    for(int i = 0; i < 3; i++){
       printf("%d, ", arr[i]);
    }
    printf("\n");

    return 0;
}

void changeArray(int* ptr){
    for(int i = 0; i < sizeof(ptr); i++){
        *(ptr + i) *= 100;
    }
}