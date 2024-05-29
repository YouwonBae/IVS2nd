# day3
## 배열
* 배열(array) : 동일 자료형의 집합

* 배열 선언과 초기화
    ```
    // 배열 선언 후 초기화
    int subway[3];

    subway[0] = 30;
    subway[1] = 40;
    subway[2] = 50;

    // 배열 선언과 함께 초기화
    // 배열 크기를 생략하지 않으면 그 방 갯수만크 메모리 잡힘
    // 초기화 하지 않은 나머지 공간에는 0으로 초기화
    int subway[10] = {30, 40, 50}; // = {30, 40, 50, 0, 0, 0, 0, 0, 0, 0}
    ```
* 문자열
    ```
    char* name = "jenny";
    char name[] = "jenny";
    char name[] = {'j', 'e', 'n', 'n', 'y', '\0'};
    ```

* 빈문자 포함 문자열
    * scanf("%s", 변수, 입력받을byte수)
        : white space가 오면 그 이전의 버퍼 내용을 return

    * gets(변수)
        : '\n' 이전까지만 인식하고 그 뒤는 버퍼에서 지움
    
    * gets(문자열)버퍼의 상태를 잘생각하고 써야함

    ```
    char* name; // 이렇게 초기화 하면 처음 주소만 잡히기 때문에 문자 저장공간 확보되지 않음

    char name[128];
    char address[512];
    ```
    
    * gets 사용 시 주의 사항
    ```
    char name[128];
    char address[512];

    printf("이름 >> ");
    scanf("%s", name, sizeof(name));

    printf("주소 >> ");
    // scanf("%s", address, sizeof(address));
    gets(address); // 버퍼를 지우는 용도
    gets(address);

    printf("입력한 이름 : %s\n", name);
    printf("입력한 주소 : %s\n", address);
    ```

* 문자열 복사
    * 깊은 복사
    ```
    char* str1 = "Hello";
    char* str2 = str1; // str1의 주소를 str2에 할당(얕은 복사)
    ```

    * 얕은 복사
    ```
    char* str1 = "Hello";
    char* str2;

    strcpy(str2, str1); // str1의 문자열을 str2에 깊은 복사
    ```

## 포인터
* 변수와주소
    * int a; 의 a변수의 주소는 &a와 같이 표현
* 포인터 변수
    * 다음과 같이 포인터 변수에 주소 저장
    ```
    int a = 1;
    int b = 2;

    int* pointer = &a;
    *pointer *= 3; // a에 직접 접근이 가능해짐
    ```
* 포인터로 값 변경
    * 포인터와 배열은 똑같이 동작함
    * 포인터 연산은 선언된 형(int : 4byte)만큼 주소 증감함
    ```
    int arr[3] = {5, 7, 9};
    int *ptr = arr;

    for(int i = 0; i < 3; i++){
        printf("arr[%d] = %d = %d\n", i, *(arr + i), arr[i]); // 포인터 연산 : 선언된 형(int : 4byte)만큼 주소 증감
    }

    for(int i = 0; i < 3; i++){
        printf("ptr[%d] = %d = %d\n", i, *(ptr + i), ptr[i]);
    }
    ```
* swap 예제
    * call by reference를 활용하여 원래 메모리에 직접 접근해야함.
    ```
    void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    }
    ```
* 함수 내 배열 값 바꾸기
    * 둘 다 가능하지만 포인터로 받는것이 사이즈 지정을 안해도 돼서 좋음
    ```
    void changeArray(int arr[3]);
    void changeArray(int* arr);

    void changeArray(int* arr){
        for(int i = 0; i < sizeof(arr); i++){
            *(arr + i) *= 100;
        }
    }
    ```

* 배열 값 return 하기
    * 함수에서 배열은 pointer로 반환해야 함
    * static : 함수 리턴 시 해당 메모리를 초기화하지 않는 명령어
    ```
    int* returnArray(int* ptr){
        static int resultArr[3];

        for(int i = 0; i < 3; i++){
            resultArr[i] = *(ptr + i);
        }


        resultArr[1] = 99;

        return resultArr;
    }
    ```

## 구조체
* 구조체(structure) : 서로 관련있는 여러 자료형 변수들을 묶어 만든 새로운 자료형
* 구조체 선언과 멤버
    ```
    struct student{
        /* datas */
        int num;        // 학번 (student 구조체 멤버 1)
        double grade;   // 학점 (student 구조체 멤버 2)
    };
    ```
* 구조체 초기화
    ```
    struct student s2 = {202, 3.81};

    s2.num = 101;
    s2.grade = 4.43;
    ```
* 구조체 배열
    ```
    struct student sArr[3] = {  {101, "홍길동", 4.43},
                                {102, "김길동", 3.81},
                                {103, "박춘향", 4.04} };
    ```
* 구조체 반환
    * type 선언으로 별칭 설정 가능
    ```
    typedef struct vision Vision;
    ```
    * 구조체를 반환하는 것이 가능함
    ```
    Vision exchange(Vision robot){
        double temp = robot.left;
        robot.left = robot.right;
        robot.right = temp;

        return robot;
    }
    ```
* 구조체 포인터
    * 아래 세가지 방법 모두 멤버변수에 접근 가능
    * 포인터 연산자 -> :  포인터가 가리키는 구조체의 멤버변수
    ```
    struct GameInfo{
    char* name;
    int year;
    int price;
    };

    typedef struct GameInfo GI;
    GI gameInfo1;

    GI* gamePtr = &gameInfo1;

    gameInfo1.name
    (*gamePtr).name
    gamePtr->name
    ```
* 링크드 리스트
    * 자기 자신의 구조체 타입 포인터를 가진 형태의 구조체
    * 아래 형태의 구조체를 연결지어 링크드 리스트 구현 가능
    ```
    struct list{
        int num;
        struct list* next;
    };
    ```