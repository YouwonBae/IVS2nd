#include <stdio.h>

//void changeArray(int a[3]);
int* returnArray(int* ptr);

int main(void){
    int arr[] = {10, 20, 30};

    printf("���� ��\n");
    for(int i = 0; i < 3; i++){
       printf("%d, ", arr[i]);
    }
    printf("\n");

    int* afterArr = returnArray(arr); // �Լ� ȣ��

    printf("���� ��\n");
    for(int i = 0; i < 3; i++){
       printf("%d, ", afterArr[i]);
    }
    printf("\n");

    return 0;
}

int* returnArray(int* ptr){
    static int resultArr[3]; // static : �Լ� ���� �� �ش� �޸𸮸� �ʱ�ȭ���� �ʴ� ��ɾ�

    for(int i = 0; i < 3; i++){
        resultArr[i] = *(ptr + i);
    }


    resultArr[1] = 99;

    return resultArr;
}