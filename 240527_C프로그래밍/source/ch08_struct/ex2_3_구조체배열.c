#include <stdio.h>
// 구조체 배열
struct student{
    int id;          // 학번 (student 구조체 멤버 1)
    char name[20];   // 이름 (student 구조체 멤버 2)
    double grade;    // 학점 (student 구조체 멤버 3)
};

void stPrint(struct student s);

int main(void){
    struct student sArr[3] = {  {101, "홍길동", 4.43},
                                {102, "김길동", 3.81},
                                {103, "박춘향", 4.04} };

    printf("학번\t이름\t학점\n");
    for(int i = 0; i < 3; i++){
        stPrint(sArr[i]);
    }

    return 0;
}

void stPrint(struct student s){
    printf("%d\t%s\t%.2lf\n", s.id, s.name, s.grade);
}