def main() -> None:
    n, m = map(int, input().split())
    picture(n, m)

def picture(n: int, m: int) -> None:
    drawing = [list(input().split()) for _ in range(n)]
    visited = [[False] * m for _ in range(n)]
    queue = []
    big_picture = 0
    sum_picture = 0
   
    for row in range(n):
        for col in range(m):
            if not visited[row][col]:
                visited[row][col] = True
                if drawing[row][col]:
                    queue.append((row, col))
                    temp_picture = 0
                    while queue:
                        print(queue)
                        x, y = queue.pop(0)
                        temp_picture += 1
                        if x - 1 >= 0 and not visited[x-1][y]:
                            visited[x-1][y] = True
                            if drawing[x-1][y]:
                                queue.append((x-1, y))
                                
                        if x + 1 < n and not visited[x+1][y]:
                            visited[x+1][y] = True
                            if drawing[x+1][y]:
                                queue.append((x+1, y))
                                
                        if y - 1 >= 0 and not visited[x][y-1]:
                            visited[x][y-1] = True
                            if drawing[x][y-1]:
                                queue.append((x, y-1))
                                
                        if y + 1 < m and not visited[x][y+1]:
                            visited[x][y+1] = True
                            if drawing[x][y+1]:
                                queue.append((x, y+1))
                                
                    big_picture = big_picture if temp_picture < big_picture else temp_picture
                    sum_picture += 1
    print(sum_picture)
    print(big_picture)

if __name__ == "__main__":
    main()