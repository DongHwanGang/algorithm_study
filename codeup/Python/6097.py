h, w = map(int, input().split())
n = int(input())

board = []

for i in range(h):
    board.append([])
    for j in range(w):
        board[i].append(0)

for i in range(n):
    l, d, x, y = map(int, input().split())
    for j in range(l):
        board[x - 1][y - 1] = 1
        if d != 0:
            x += 1
        else:
            y += 1

for i in board:
    for j in i:
        print(j, end = ' ')
    print()
            
