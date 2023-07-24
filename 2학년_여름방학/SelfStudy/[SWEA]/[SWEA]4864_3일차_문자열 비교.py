def main()->None:
    cmpstr(int(input()))

def cmpstr(T: int)->None:
    str1: str = ""
    str2: str = ""
    test_case: int = 0
    cnt: int = 0
    idx: int = 0
    start: int = 0
    i: int = 0
    j: int = 0
    answer: int = 0

    for test_case in range(T):
        str1 = input()
        str2 = input()
        idx = 0
        start = len(str1)
        answer = 0

        while idx <= len(str2) - start:
            cnt = 0
            for i in range(start):
                if str1[i] == str2[idx + i]:
                    cnt += 1
                else:
                    break
            if cnt == start:
                answer += 1
            idx += 1
        print("#%d %d" %(test_case + 1, answer))

if __name__ == "__main__":
    main()