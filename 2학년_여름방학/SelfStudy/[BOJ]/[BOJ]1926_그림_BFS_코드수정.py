def main() -> None:
    n, m = map(int, input().split())
    picture(n, m)

def picture(n: int, m: int) -> None:
    drawing = [list(map(int, input().split())) for _ in range(n)]
    visited = [[False] * m for _ in range(n)]
    dx = (-1, 1, 0, 0)
    dy = (0, 0, -1, 1)
    big_picture = 0
    sum_picture = 0
   
    for row in range(n):
        for col in range(m):
            if not visited[row][col]:
                visited[row][col] = True
                if drawing[row][col]:
                    queue = []
                    queue.append((row, col))
                    temp_picture = 0
                    while queue:                        
                        x, y = queue.pop(0)
                        temp_picture += 1
                        for d in range(4):
                            nx = x + dx[d]
                            ny = y + dy[d]
                            if nx < 0 or nx >= n or ny < 0 or ny >= m:
                                continue
                            if visited[nx][ny] or not drawing[nx][ny]:
                                continue
                            visited[nx][ny] = True
                            queue.append((nx, ny))
                            
                    big_picture = big_picture if temp_picture < big_picture else temp_picture
                    sum_picture += 1
    print(sum_picture)
    print(big_picture)

if __name__ == "__main__":
    main()