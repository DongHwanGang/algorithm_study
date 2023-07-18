a = int(input())
borad = [[0]*19 for i in range(19)]

while a > 0:
    x, y = map(int, input().split())
    borad[x - 1][y - 1] = 1
    a -= 1
    
for i in range(len(borad)):
    for j in range(len(borad[i])):
        print(borad[i][j], end= ' ')
    print()
