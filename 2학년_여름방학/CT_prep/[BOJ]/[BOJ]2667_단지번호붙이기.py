from collections import deque

def main() -> None:
    plan_map(int(input()))

def plan_map(N: int) -> None:
    plan: list = [list(map(int, input())) for i in range(N)]
    visited: list = [[False]*N for i in range(N)]
    dx: tuple = (-1, 1, 0, 0)
    dy: tuple = (0, 0, -1, 1)
    aptcnt: int = 0 # n동의 아파트의 개수
    queue: deque = deque()
    aptarr: list = [] # n동의 아마트의 개수 저장하는 list
    bfscnt: int = 0 # n동의 개수

    # bfs
    for row in range(N):
        for col in range(N):
            if not visited[row][col]:
                visited[row][col] = True
                if plan[row][col]:
                    queue = deque()
                    queue.append((row, col))
                    bfscnt += 1
                    aptcnt = 0
                    while queue:
                        x, y = queue.popleft()
                        aptcnt += 1
                        for d in range(4):
                            nx = x + dx[d]
                            ny = y + dy[d]

                            if nx < 0 or nx >= N or ny < 0 or ny >= N:
                                continue
                            if visited[nx][ny] or not plan[nx][ny]:
                                continue
                            visited[nx][ny] = True
                            queue.append((nx, ny))
                    aptarr.append(aptcnt)
                    
    # 오름차순으로 각 동의 아파트의 크기 정렬                    
    aptarr.sort()
    print(bfscnt)
    for num in aptarr:
        print(num)
if __name__ == "__main__":
    main()