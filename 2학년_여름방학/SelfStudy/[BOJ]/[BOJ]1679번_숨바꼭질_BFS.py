from collections import deque

def main() -> None:
    N, K = map(int, input().split())
    hide_and_seek(N, K)

def hide_and_seek(N: int, K: int) -> None:
    local: list = [-1]*100001
    local[N] = 0
    queue: deque = deque()
    d: tuple = (-1, 1, 2)
    queue.append(N)

    while local[K] == -1:
        x = queue.popleft()
        for i in range(3):
            if i < 2:
                nx = x + d[i]
            else:
                nx = d[i]*x
            if nx < 0 or nx > 100000:
                continue
            if local[nx] != -1:
                continue
            local[nx] = local[x] + 1
            queue.append(nx)
    print(local[K])
if __name__ =="__main__":
    main()