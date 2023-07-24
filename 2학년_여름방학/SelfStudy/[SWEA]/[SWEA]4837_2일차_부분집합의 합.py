def main()->None:
    subset(int(input()))

def subset(T: int)->None:
    N: int = 0
    K: int = 0
    test_case: int = 0
    cnt: int = 0
    add: int = 0
    i: int = 0
    j: int = 0
    answer: int = 0
    stdset: list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]

    for test_case in range(T):
        N, K = map(int, input().split())
        answer = 0
        for i in range(1<<12):
            cnt = 0
            add = 0
            
            for j in range(12):
                if i&(1<<j):
                    cnt += 1
                    add += stdset[j]
            if cnt == N and add == K:
                answer += 1
        print("#%d %d" %(test_case + 1, answer))

if __name__ == "__main__":
    main()
