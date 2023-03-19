import sys
N = int(sys.stdin.readline().rstrip())

std = 2*N - 1

for i in range(std):
    if i < N:
        star = '*'*(2*i + 1)
    else:
        star = star[1:-1]
    
    print(star.center(std, ' ').rstrip())