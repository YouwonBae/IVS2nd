#include <stdio.h>
// 실수형 (float 4byte, double 8byte)
// 정수형(int 4byte, long 4byte, long long 8byte)
// 
// float는 4byte 범위가 넘어가면 쓰레기값이 입력돼있음
// 현재는 메모리가 부족하지 않기 때문에 실무에서는 double형 만 씀

//int main(void) {
//	int age = 20;
//	long long money = 2200000000L;
//	float f = 10.1F;
//	double d = 10.1;
//	
//	printf("f = %.11f, d = %.11lf\n", f, d);
//
//	if (f== d) {
//		printf("f == d");
//	}
//	else {
//		printf("f != d");
//	}
//
//	return 0;
//}