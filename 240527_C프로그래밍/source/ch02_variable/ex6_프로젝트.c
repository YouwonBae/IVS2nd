#include <stdio.h>
// ������(����ξ���), ������ġ, �鿩���� 
int main(void) {
	char name[100];
	char gender[4];
	int s1, s2, s3 = 0;

	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, (unsigned)sizeof(name));
	printf("������ �Է��ϼ��� (��/��) : ");
	scanf_s("%s", gender, (unsigned)sizeof(gender));
	printf("���� ���� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &s1, &s2, &s3);

	printf("\n--- �л����� ---\n");
	printf("�̸� : %s\n", name);
	printf("���� : %s\n", gender);
	printf("���� : %d\n", s1);
	printf("���� : %d\n", s2);
	printf("���� : %d\n", s3);
	printf("�հ� : %d\n", s1 + s2 + s3);
	printf("��� : %.2lf\n", (s1 + s2 + s3)/3.0);

	return 0;
}