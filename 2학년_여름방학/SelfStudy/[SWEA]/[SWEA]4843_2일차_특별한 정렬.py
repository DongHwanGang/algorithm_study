def main()->None:
    special_sort(int(input()))

def special_sort(T: int)->None:
    test_case: int = 0
    N: int = 0
    i: int = 0
    numbers: list = None
    start: int = 0
    end: int = 0
    cnt: int = 0
    for test_case in range(T):
        N = int(input())
        numbers = list(map(int, input().split()))
        numbers.sort()
        start = 0
        end = len(numbers) - 1
        cnt = 0

        print("#%d" %(test_case + 1), end=" ")
        while cnt < 10:
            if cnt%2 == 0:
                print(numbers[end], end=" ")
                end -= 1
            else:
                print(numbers[start], end=" ")
                start += 1
            cnt += 1
        print()
if __name__=="__main__":
    main()