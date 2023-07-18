import sys
input = sys.stdin.readline

Kg = int(input().rstrip())
temp = Kg
sweet3kg = 0
answer = 0

while temp >= 0:
    if temp % 5 == 0:
        print(temp // 5 + sweet3kg)
        exit(1)

    temp -= 3
    sweet3kg += 1

print(-1)