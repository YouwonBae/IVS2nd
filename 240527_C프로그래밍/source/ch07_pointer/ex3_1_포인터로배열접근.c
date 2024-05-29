#include <stdio.h>

int main(void){
    int arr[3] = {5, 7, 9};
    int *ptr = arr;

    for(int i = 0; i < 3; i++){
        printf("arr[%d] = %d = %d\n", i, *(arr + i), arr[i]); // ������ ���� : ����� ��(int : 4byte)��ŭ �ּ� ����
    }

    for(int i = 0; i < 3; i++){
        printf("ptr[%d] = %d = %d\n", i, *(ptr + i), ptr[i]);
    }


    ptr[0] = 55;
    ptr[1] = 77;
    ptr[2] = 99;
    printf("\n============== ptr������ =============\n");
    for(int i = 0; i < 3; i++){
        printf("arr[%d] = %d = %d\n", i, *(arr + i), arr[i]);
    }
    for(int i = 0; i < 3; i++){
        printf("ptr[%d] = %d = %d\n", i, *(ptr + i), ptr[i]);
    }

    return 0;
}