#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArr(int* ptr);
int* makeLotto();
void swap(int* a, int* b);
void sortArray(int* ptr);

int main(void){
    int* lotto = makeLotto();
    sortArray(lotto);
    printArr(lotto);
}

void printArr(int* ptr){
    for(int i = 0; i < 6; i++){
       printf("%d, ", *(ptr + i));
    }
    printf("\n");
}

int* makeLotto(){
    static int lotto[6];
    int pick_ch[46] = { 0, }; // 0 ~ 45 ch ¹è¿­

    srand((unsigned int) time(NULL));

    int i = 0;
    while(i < 6){
        int temp = rand()%45 + 1; // 1 ~ 45

        if(pick_ch[temp] == 0){
            pick_ch[temp] = 1;
            lotto[i] = temp;
            i++;
        }
    }

    return lotto;
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