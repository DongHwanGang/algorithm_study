def main() -> None:
    make_colorpaper(int(input()))

def make_colorpaper(N: int) -> None:
    paper = [list(map(int, input().split())) for _ in range(N)]
    visited = [[False]*N for _ in range(N)]
    queue = []
    temp_save = []
    temp = []
    whatpaper = True
    sum_paper = 0
    white = 0
    blue = 0

    for row in range(N):
        for col in range(N):
            if not visited[row][col]:
                temp = []
                visited[row][col] = True
                queue.append((row, col))
                temp_save.append((row, col))

                if paper[row][col]:
                    whatpaper = True
                else:
                    whatpaper = False

                while queue:
                    x, y = queue.pop(0)
                    if x + 1 < N and y + 1 < N and not visited[x+1][y+1]:
                        if (whatpaper and paper[x+1][y+1]) or (not whatpaper and not paper[x+1][y+1]):
                            temp.append((x+1, y+1))
                            tmp_x, tmp_y = x+1, y+1
                            flag = True
                            while x != tmp_x and y != tmp_y:
                                if whatpaper and paper[tmp_x][y+1] and paper[x+1][tmp_y]:
                                    temp.append((tmp_x, y+1))
                                    temp.append((x+1, tmp_y))
                                    tmp_x -= 1
                                    tmp_y -= 1
                                    
                                elif not whatpaper and not paper[tmp_x][y+1] and not paper[x+1][tmp_y]:
                                    temp.append((tmp_x, y+1))
                                    temp.append((x+1, tmp_y))
                                    tmp_x -= 1
                                    tmp_y -= 1
                                
                                else:
                                    flag = False
                                    break

                            if flag:
                                temp_save = temp_save + temp
                                queue.append((temp[0][0], temp[0][1]))
                            

                x, y = temp_save[0]
                if paper[x][y]:
                    blue+=1
                else:
                    white+=1

                for i in temp_save:
                    x, y = i
                    visited[x][y] = True
    print(white)
    print(blue)

if __name__ == "__main__":
    main()