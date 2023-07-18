from collections import deque
T = int(input())
 
for k in range(T):
    M, N, K = list(map(int, input().split()))
    farm = list()
    check = list()
    bug = 0
    for i in range(N):
        farm.append([])
        check.append([])
        for j in range(M):
            farm[i].append(0)
            check[i].append(0)

    for i in range(K):
        row, col = map(int, input().split())
        farm[col][row] = 1

    for i in range(N):
        for j in range(M):
            if check[i][j] == 0:
                check[i][j] = 1
                if farm[i][j] == 1:
                    queue = [[i, j]]
                    flag = False
                    while queue:
                        flag = True
                        row, col = queue.pop(0)
                        if row != 0 and check[row-1][col] == 0:
                            check[row-1][col] = 1
                            if farm[row-1][col] == 1:
                                queue.append([row-1, col])

                        if col != 0 and check[row][col-1] == 0:
                            check[row][col-1] = 1
                            if farm[row][col-1] == 1:
                                queue.append([row, col-1])

                        if row != N-1 and check[row+1][col] == 0:
                            check[row+1][col] = 1
                            if farm[row+1][col] == 1:
                                queue.append([row+1, col])

                        if col != M-1 and check[row][col+1] == 0:
                            check[row][col+1] = 1
                            if farm[row][col+1] == 1:
                                queue.append([row, col+1])
                    if flag:
                        bug += 1
    print(bug)