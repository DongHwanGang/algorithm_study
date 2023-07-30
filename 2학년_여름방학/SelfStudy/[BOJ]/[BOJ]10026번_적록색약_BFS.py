from collections import deque

def main() -> None:
    red_green_color_weakness(int(input()))

def red_green_color_weakness(N: int) -> None:
    gird: list = [list(input()) for i in range(N)]
    colors: list = [0, 0, 0]
    dx: tuple = (-1, 1, 0, 0)
    dy: tuple = (0, 0, -1, 1)
    queue: deque = deque()
    color: str = ""

    for row in range(N):
        for col in range(N):
            if gird[row][col] != 1:
                color = gird[row][col]
                gird[row][col] = 1
                queue.append((row, col))
                cnt = 0
                while queue:
                    x, y = queue.popleft()
                    cnt += 1
                    for i in range(4):
                        nx = x + dx[i]
                        ny = y + dy[i]
                        if nx < 0 or nx >= N or ny < 0 or ny >= N:
                            continue
                        if gird[nx][ny] != color:
                            continue
                        gird[nx][ny] = 1
                        queue.append((nx, ny))
                
                if color == 'R':
                    colors[0] += 1
                elif color == 'G':
                    colors[1] += 1
                else:
                    colors[2] += 1
    print(f"{sum(colors)} {max(colors[:2]) + colors[2]}")
if __name__ == "__main__":
    main()