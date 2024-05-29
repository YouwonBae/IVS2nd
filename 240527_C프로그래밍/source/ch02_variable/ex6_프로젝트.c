#include <stdio.h>
// 변수명(영어로쓰기), 변수위치, 들여쓰기 
int main(void) {
	char name[100];
	char gender[4];
	int s1, s2, s3 = 0;

	printf("이름을 입력하세요 : ");
	scanf_s("%s", name, (unsigned)sizeof(name));
	printf("성별을 입력하세요 (남/여) : ");
	scanf_s("%s", gender, (unsigned)sizeof(gender));
	printf("국어 영어 수학 점수를 입력하세요 : ");
	scanf_s("%d %d %d", &s1, &s2, &s3);

	printf("\n--- 학생정보 ---\n");
	printf("이름 : %s\n", name);
	printf("성별 : %s\n", gender);
	printf("국어 : %d\n", s1);
	printf("영어 : %d\n", s2);
	printf("수학 : %d\n", s3);
	printf("합계 : %d\n", s1 + s2 + s3);
	printf("평균 : %.2lf\n", (s1 + s2 + s3)/3.0);

	return 0;
}