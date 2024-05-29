#include <stdio.h>

void printArr(int* ptr);
void swap(int* a, int* b);
void sortArray(int* ptr);

int main(void){
    int lotto[6] = {41, 1, 35, 20, 45, 10};

    printf("정렬 전\n");
    printArr(lotto);

    sortArray(lotto);

    printf("정렬 후\n");
    printArr(lotto);
}

void printArr(int* ptr){
    for(int i = 0; i < 6; i++){
       printf("%d, ", *(ptr + i));
    }
    printf("\n");
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int* ptr){
    for(int i = 0; i <= 4; i++){
        for(int j = i + 1; j <= 5; j++){
            if(*(ptr + i) > *(ptr + j)){
                swap(ptr + i, ptr + j);
            }
        }
    }
}