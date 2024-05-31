def fibonacci(n):
    '''
    매개변수로 들어온 n값 미만의 피보나치 수열을 출력합니다.
    ex. 매개변수로 10 : 0, 1, 1, 2, 3, 5, 8
    ex. 매개변수로 5 : 0, 1, 1, 2, 3
    '''
    a, b = 0, 1
    while a < n:
        print(a, end='. ')
        a, b = b, a+b
    print() # 개행

if __name__ == '__main__':
    fibonacci(100)
    print(__name__, '에서 테스트함')