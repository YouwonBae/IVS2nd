# day2
## ������, �ݺ���
* ������
    * ���
    * ����
    * ��, ����
    * ��
    * ��Ʈ
    * ����

* �ݺ��� ����
    * for ��
    * while ��

* ���� �ݺ���
    * ���� for ��

## ���ǹ�
* if ��
    ```
    if(num == 1){
    printf("dice 1");
    }else if(num == 2){
        printf("dice 2");
    }else{
        printf("number is not in dice");
    }
    ```
* switch ��
    * break�� ������ ��
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

## �Լ�
* �Լ� �Ű����� ����
    * call by value
    ```
    int sum(int from, int to);
    ```
    * call by value
    ```
    void sum(int from, int to, int* ref);
    ```
* �Լ� ���� ����
    * C���� C++�� �޸� �Լ� �����ε� �Ұ�
    ```
    int line(int i); // �Ű������� ��ȯ���� �����ϴ� ����
    void noArg(); // ��ȯ���� �Ű������� ���� �Լ�
    ```