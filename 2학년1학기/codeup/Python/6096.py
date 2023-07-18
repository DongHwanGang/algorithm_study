board = []
revers_num = []
for i in range(19):
    board.append(list(map(int, input().split())))

numbers = int(input())

for i in range(numbers):
    x, y = map(int, input().split())
    for one in range(19):
        board[x - 1][one] = 0 if board[x - 1][one] != 0 else 1
    for one in range(19):
        board[one][y - 1] = 0 if board[one][y - 1] != 0 else 1

for i in board:
    for j in i:
        print(j, end = ' ')
    print()
         
