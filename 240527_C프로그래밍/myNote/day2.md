# day2
## 연산자, 반복문
* 연산자
    * 산술
    * 증감
    * 비교, 삼항
    * 논리
    * 비트
    * 대입

* 반복문 종류
    * for 문
    * while 문

* 이중 반복문
    * 이중 for 문

## 조건문
* if 문
    ```
    if(num == 1){
    printf("dice 1");
    }else if(num == 2){
        printf("dice 2");
    }else{
        printf("number is not in dice");
    }
    ```
* switch 문
    * break에 유의할 것
    ```
    switch(num){
        case 1 : 
            printf("dice 1"); break;
        case 2 : 
            printf("dice 2"); break;
        default :
            printf("number is not in dice");
    }
    ```

## 함수
* 함수 매개변수 형태
    * call by value
    ```
    int sum(int from, int to);
    ```
    * call by value
    ```
    void sum(int from, int to, int* ref);
    ```
* 함수 선언 형태
    * C언어는 C++과 달리 함수 오버로딩 불가
    ```
    int line(int i); // 매개변수와 반환값이 존재하는 형태
    void noArg(); // 반환값도 매개변수도 없는 함수
    ```