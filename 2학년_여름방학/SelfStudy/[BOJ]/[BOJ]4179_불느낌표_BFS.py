from collections import deque

def main() -> None:
    R, C = map(int, input().split())
    escape_maze(R, C)

def escape_maze(rows: int, cols: int) -> None:
    maze: list = [list(input()) for i in range(rows)]
    dx: tuple = (-1, 1, 0, 0)
    dy: tuple = (0, 0, -1, 1)
    queue: deque = deque()
    level: int = 0
    tmp: list = []
    flag: bool = False
    for row in range(rows):
        for col in range(cols):
            if maze[row][col] == 'J':
                tmp.append(row)
                tmp.append(col)
            elif maze[row][col] == 'F':
                maze[row][col] = 0
                queue.append((row, col))

    while queue:
        x, y = queue.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or nx >= rows or ny < 0 or ny >= cols:
                continue
            if maze[nx][ny] != '.':
                continue
            maze[nx][ny] = maze[x][y] + 1
            queue.append((nx, ny))

    queue.append((tmp[0], tmp[1]))
    maze[tmp[0]][tmp[1]] = 0
    while queue:
        x, y = queue.popleft()
        if x == 0 or x == rows -1 or y == 0 or y == cols -1:
            print(maze[x][y] + 1)
            exit(0)
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or nx >= rows or ny < 0 or ny >= cols:
                continue
            if maze[nx][ny] == '#':
                continue
            if maze[nx][ny] != '.' and maze[nx][ny] <= maze[x][y] + 1:
                continue
            maze[nx][ny] = maze[x][y] + 1
            queue.append((nx, ny))

    print("IMPOSSIBLE")
if __name__ == "__main__":
    main()