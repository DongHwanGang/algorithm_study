X = int(input())
N = int(input())
num = 0

for i in range(N):
    a, b = map(int, input().split())
    num = a * b + num
    
print('Yes') if num == X else print('No')