def main()->None:
    T:int = int(input())
    section_sum(T)

def section_sum(num: int)->None:
    cnt: int = 0
    idx: int = 0
    N: int = 0
    M: int = 0
    test_case: list = None
    sum_min: int = None
    sum_max: int = None
    temp: int = None

    for cnt in range(num):
        sum_min = 1000001
        sum_max = 0
        N, M = map(int, input().split())
        test_case = list(map(int, input().split()))
        for idx in range(N-M+1):
            temp = sum(test_case[idx:idx+M])
            sum_max = sum_max if temp < sum_max else temp
            sum_min = sum_min if sum_min < temp else temp
        print("#%d %d" %(cnt+1, sum_max - sum_min)) 

if __name__ == "__main__":
    main()