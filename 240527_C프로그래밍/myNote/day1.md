# day1
## 프로그래밍 언어
* 컴파일 언어 : C, C++
* 인터프리터 언어 : Python, JavaScript

## 변수
* 정수형 변수 선언 방법
    1. 자료명 변수명 = 초기값
    2. 자료형 변수명
    3. 자료형 변수명1=값1, 변수명2=값2
    4. 자료형 변수명1, 변수명2

* 서식 지정자 : %d, %f, %.3lf, %c, %s

* 실수형
    1. 정수형과 정수형 사칙연산 결과는 정수형. 실수 출력 시 둘 중 하나라도 double형으로 형변환 해야함.
    2. float는 4byte 범위가 넘어가면 쓰레기값이 입력돼있음 현재는 메모리가 부족하지 않기 때문에 실무에서는 double형 만 씀

* 문자형(문자열, 문자)
    ```
    char gender = 'F';
    char name[] = "제니";
    char* name = "제니";
    ```
    ```
    char gender, name[100];
    
    scanf_s("%c", &gender, 1); // size 지정
    scanf_s("%s", name, (unsigned)sizeof(name)); // size 지정
    ```