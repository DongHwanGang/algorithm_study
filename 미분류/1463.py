N = int(input())
cnt = 0
N -= 1
while N != 0:
    if N % 6 == 0:
       N /= 6
       cnt+=2
    elif N % 3 == 0:
        N /= 3
        cnt+=1
    elif N % 2 == 0:
        N /= 2
        cnt += 1
    else:
        N -= 1
        cnt += 1

print(cnt)