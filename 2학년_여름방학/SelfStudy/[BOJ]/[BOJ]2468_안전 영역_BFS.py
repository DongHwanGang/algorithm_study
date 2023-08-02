from collections import deque

def main() -> None:
    safety_area(int(input()))

def safety_area(N: int) -> None:
    area: list = [list(map(int, input().split())) for i in range(N)]
    answer: int = 1
    dx: tuple = (-1, 1, 0, 0)
    dy: tuple = (0, 0, -1, 1)

    for repeat in range(1, 101):
        visited = [[False]*N for i in range(N)]
        queue: deque = deque()
        cnt = 0
        for row in range(N):
            for col in range(N):
                if not visited[row][col]:
                    visited[row][col] = True
                    if area[row][col] > repeat:
                        queue.append((row, col))
                        while queue:
                            x, y = queue.popleft()
                            for i in range(4):
                                nx = x + dx[i]
                                ny = y + dy[i]
                                if nx < 0 or nx >= N or ny < 0 or ny >= N:
                                    continue
                                if visited[nx][ny] or area[nx][ny] <= repeat:
                                    continue
                                visited[nx][ny] = True
                                queue.append((nx, ny))
                        cnt += 1
                
        answer = answer if answer > cnt else cnt
    print(answer)

if __name__ == "__main__":
    main()