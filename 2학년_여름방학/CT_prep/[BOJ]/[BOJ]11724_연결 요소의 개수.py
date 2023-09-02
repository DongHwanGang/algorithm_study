from collections import deque
import sys

input = sys.stdin.readline

def main() -> int:
    N, M = map(int, input().rstrip().split())
    graph: list = list([] for i in range(N))
    visited = [False] * N
    queue: deque = deque()
    cnt: int = 0
    
    for i in range(M):
        u, v = map(int, input().rstrip().split())
        graph[u - 1].append(v - 1)
        graph[v - 1].append(u - 1)
    
    for i in range(N):
        if not visited[i]:
            visited[i] = True
            for j in graph[i]:
                queue.append(j)
            while queue:
                u = queue.popleft()
                if not visited[u]:
                    visited[u] = True
                    for k in graph[u]:
                        queue.append(k)
            cnt += 1
    print(cnt)

    return 0

if __name__ == "__main__":
    main()