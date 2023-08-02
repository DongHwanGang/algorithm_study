import sys
input = sys.stdin.readline

def main() -> None:
    N = int(input().rstrip())
    M = int(input().rstrip())
    S = input().rstrip()

    cnt = 0

    if N % 2:
        for i in range(N, M - N):
            if S[i] == 'O':
                flag = True
                num = 0
                while num <= N:
                    if num % 2 == 0:
                        if S[i - num] != 'O' or S[i + num] != 'O':
                            flag = False
                            break
                    else:
                        if S[i - num] != 'I' or S[i + num] != 'I':
                            flag = False
                            break
                    num += 1
                if flag:
                    cnt += 1

    else:
        for i in range(N, M - N):
            if S[i] == 'I':
                flag = True
                num = 0
                while num <= N:
                    if not num % 2:
                        if S[i - num] != 'I' or S[i + num] != 'I':
                            flag = False
                            break
                    else:
                        if S[i - num] != 'O' or S[i + num] != 'O':
                            flag = False
                            break
                    num += 1
                if flag:
                    cnt += 1
    print(cnt)

if __name__ == "__main__":
    main()