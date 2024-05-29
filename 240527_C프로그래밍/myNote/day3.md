# day3
## �迭
* �迭(array) : ���� �ڷ����� ����

* �迭 ����� �ʱ�ȭ
    ```
    // �迭 ���� �� �ʱ�ȭ
    int subway[3];

    subway[0] = 30;
    subway[1] = 40;
    subway[2] = 50;

    // �迭 ����� �Բ� �ʱ�ȭ
    // �迭 ũ�⸦ �������� ������ �� �� ������ũ �޸� ����
    // �ʱ�ȭ ���� ���� ������ �������� 0���� �ʱ�ȭ
    int subway[10] = {30, 40, 50}; // = {30, 40, 50, 0, 0, 0, 0, 0, 0, 0}
    ```
* ���ڿ�
    ```
    char* name = "jenny";
    char name[] = "jenny";
    char name[] = {'j', 'e', 'n', 'n', 'y', '\0'};
    ```

* ���� ���� ���ڿ�
    * scanf("%s", ����, �Է¹���byte��)
        : white space�� ���� �� ������ ���� ������ return

    * gets(����)
        : '\n' ���������� �ν��ϰ� �� �ڴ� ���ۿ��� ����
    
    * gets(���ڿ�)������ ���¸� �߻����ϰ� �����

    ```
    char* name; // �̷��� �ʱ�ȭ �ϸ� ó�� �ּҸ� ������ ������ ���� ������� Ȯ������ ����

    char name[128];
    char address[512];
    ```
    
    * gets ��� �� ���� ����
    ```
    char name[128];
    char address[512];

    printf("�̸� >> ");
    scanf("%s", name, sizeof(name));

    printf("�ּ� >> ");
    // scanf("%s", address, sizeof(address));
    gets(address); // ���۸� ����� �뵵
    gets(address);

    printf("�Է��� �̸� : %s\n", name);
    printf("�Է��� �ּ� : %s\n", address);
    ```

* ���ڿ� ����
    * ���� ����
    ```
    char* str1 = "Hello";
    char* str2 = str1; // str1�� �ּҸ� str2�� �Ҵ�(���� ����)
    ```

    * ���� ����
    ```
    char* str1 = "Hello";
    char* str2;

    strcpy(str2, str1); // str1�� ���ڿ��� str2�� ���� ����
    ```

## ������
* �������ּ�
    * int a; �� a������ �ּҴ� &a�� ���� ǥ��
* ������ ����
    * ������ ���� ������ ������ �ּ� ����
    ```
    int a = 1;
    int b = 2;

    int* pointer = &a;
    *pointer *= 3; // a�� ���� ������ ��������
    ```
* �����ͷ� �� ����
    * �����Ϳ� �迭�� �Ȱ��� ������
    * ������ ������ ����� ��(int : 4byte)��ŭ �ּ� ������
    ```
    int arr[3] = {5, 7, 9};
    int *ptr = arr;

    for(int i = 0; i < 3; i++){
        printf("arr[%d] = %d = %d\n", i, *(arr + i), arr[i]); // ������ ���� : ����� ��(int : 4byte)��ŭ �ּ� ����
    }

    for(int i = 0; i < 3; i++){
        printf("ptr[%d] = %d = %d\n", i, *(ptr + i), ptr[i]);
    }
    ```
* swap ����
    * call by reference�� Ȱ���Ͽ� ���� �޸𸮿� ���� �����ؾ���.
    ```
    void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    }
    ```
* �Լ� �� �迭 �� �ٲٱ�
    * �� �� ���������� �����ͷ� �޴°��� ������ ������ ���ص� �ż� ����
    ```
    void changeArray(int arr[3]);
    void changeArray(int* arr);

    void changeArray(int* arr){
        for(int i = 0; i < sizeof(arr); i++){
            *(arr + i) *= 100;
        }
    }
    ```

* �迭 �� return �ϱ�
    * �Լ����� �迭�� pointer�� ��ȯ�ؾ� ��
    * static : �Լ� ���� �� �ش� �޸𸮸� �ʱ�ȭ���� �ʴ� ��ɾ�
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

## ����ü
* ����ü(structure) : ���� �����ִ� ���� �ڷ��� �������� ���� ���� ���ο� �ڷ���
* ����ü ����� ���
    ```
    struct student{
        /* datas */
        int num;        // �й� (student ����ü ��� 1)
        double grade;   // ���� (student ����ü ��� 2)
    };
    ```
* ����ü �ʱ�ȭ
    ```
    struct student s2 = {202, 3.81};

    s2.num = 101;
    s2.grade = 4.43;
    ```
* ����ü �迭
    ```
    struct student sArr[3] = {  {101, "ȫ�浿", 4.43},
                                {102, "��浿", 3.81},
                                {103, "������", 4.04} };
    ```
* ����ü ��ȯ
    * type �������� ��Ī ���� ����
    ```
    typedef struct vision Vision;
    ```
    * ����ü�� ��ȯ�ϴ� ���� ������
    ```
    Vision exchange(Vision robot){
        double temp = robot.left;
        robot.left = robot.right;
        robot.right = temp;

        return robot;
    }
    ```
* ����ü ������
    * �Ʒ� ������ ��� ��� ��������� ���� ����
    * ������ ������ -> :  �����Ͱ� ����Ű�� ����ü�� �������
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
* ��ũ�� ����Ʈ
    * �ڱ� �ڽ��� ����ü Ÿ�� �����͸� ���� ������ ����ü
    * �Ʒ� ������ ����ü�� �������� ��ũ�� ����Ʈ ���� ����
    ```
    struct list{
        int num;
        struct list* next;
    };
    ```