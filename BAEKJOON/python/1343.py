import sys

board = sys.stdin.readline().rstrip().split('.')
answer = []
for i in board:
    X = len(i)
    if X != 0 and X % 2 == 0:
        temp = ''
        if X // 4 > 0:
            temp = (X // 4)*'AAAA'
            X = X - len(temp)
        if X % 4 > 0 and X // 2 > 0:
            temp = temp + (X//2)*'BB'
        answer.append(temp)
    
    elif X == 0:
        answer.append('')
    else:
        print(-1)
        exit()

answer = '.'.join(answer)
print(answer)