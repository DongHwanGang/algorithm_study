from collections import deque

def main() -> None:
    M: int = 0
    N: int = 0
    M, N = map(int, input().split())
    tomato(M, N)

def tomato(cols: int, rows: int) -> None:
    tomato_box: list = [list(map(int, input().split())) for i in  range(rows)]
    visited: list = [[-1]*cols for i in range(rows)]
    dx: tuple = (-1, 1, 0, 0)
    dy: tuple = (0, 0, -1, 1)
    tomato_cnt: int = 0
    queue: deque = deque()
    block_cnt: int = 0
    level: int = 0

    for row in range(rows):
        for col in range(cols):
            if visited[row][col] == -1 :
                if tomato_box[row][col] == 1:
                    visited[row][col] = 0
                    queue.append((row, col))
                elif tomato_box[row][col] == -1:
                    block_cnt += 1
    
    while queue:
        x, y = queue.popleft()
        tomato_cnt += 1
        for d in range(4):
            nx = x + dx[d]
            ny = y + dy[d]
            if nx < 0 or nx >= rows or ny < 0 or ny >= cols:
                continue
            if visited[nx][ny] != -1 or tomato_box[nx][ny]:
                continue
            level = visited[nx][ny] = visited[x][y] + 1
            queue.append((nx, ny))
    
    if rows*cols == tomato_cnt + block_cnt:
        print(level)
    else:
        print(-1)

if __name__ == "__main__":
    main()