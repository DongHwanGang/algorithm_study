N, M = map(int, input().split())

if N < M:
    N, M = M, N

value, rest = N, M

while rest != 0:
    temp = rest
    rest = value % rest
    value = temp

print(value)
print((N*M//value))