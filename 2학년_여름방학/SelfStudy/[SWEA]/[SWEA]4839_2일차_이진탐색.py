def main()->None:
    Search_A_B(int(input()))

def Search_A_B(T: int)->None:
    test_case: int = 0
    end: int = 0
    aim_A: int = 0
    aim_B: int = 0

    for test_case in range(T):
        end, aim_A, aim_B = list(map(int, input().split()))
        aim_A = BinarySearch(end, aim_A) 
        aim_B = BinarySearch(end, aim_B)
        print("#%d" %(test_case+1), end=" ")
        if aim_A == aim_B:
            print('0')
        else:
            print('A') if aim_A < aim_B else print('B')

def BinarySearch(end: int, aim: int) -> int:
    start: int = 1
    middle: int = 0
    cnt: int = 0

    while start <= end:
        cnt += 1
        middle = (start + end)//2
        if aim == middle:
            return cnt
        elif aim > middle:
            start = middle
        else:
            end = middle
if __name__ == "__main__":
    main()