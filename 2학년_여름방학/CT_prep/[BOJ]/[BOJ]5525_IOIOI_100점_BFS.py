from collections import deque
import sys
input = sys.stdin.readline

def main() -> None:
    N = int(input().rstrip())
    M = int(input().rstrip())
    S = list(input().rstrip())
    
    cnt = 0
    i = 0
    while i < M - 2:
        if S[i] != 0:
            if S[i] == "I":
                queue = deque()
                S[i] = 0
                queue.append(i)
                while queue:
                    x = queue.popleft()
                    if x + 1 >= M or x + 2 >= M:
                        i = x + 1
                        if S[x] - N >= 0:
                            cnt = cnt + S[x] - N + 1
                        break
                    elif S[x + 1] == "O" and S[x + 2] == "I":
                        S[x + 1] = S[x + 2] = S[x] + 1
                        queue.append(x + 2)
                    else:
                        i = x + 1
                        if S[x] - N >= 0:
                            cnt = cnt + S[x] - N + 1
                        break
            else:
                i += 1
    print(cnt)

if __name__ == "__main__":
    main()